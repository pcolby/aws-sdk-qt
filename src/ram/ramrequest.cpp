/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ramrequest.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::RamRequest
 * \brief The RamRequest class provides an interface for RAM requests.
 *
 * \inmodule QtAwsRAM
 */

/*!
 * \enum RamRequest::Action
 *
 * This enum describes the actions that can be performed as RAM
 * requests.
 *
 * \value AcceptResourceShareInvitationAction RAM AcceptResourceShareInvitation action.
 * \value AssociateResourceShareAction RAM AssociateResourceShare action.
 * \value CreateResourceShareAction RAM CreateResourceShare action.
 * \value DeleteResourceShareAction RAM DeleteResourceShare action.
 * \value DisassociateResourceShareAction RAM DisassociateResourceShare action.
 * \value EnableSharingWithAwsOrganizationAction RAM EnableSharingWithAwsOrganization action.
 * \value GetResourcePoliciesAction RAM GetResourcePolicies action.
 * \value GetResourceShareAssociationsAction RAM GetResourceShareAssociations action.
 * \value GetResourceShareInvitationsAction RAM GetResourceShareInvitations action.
 * \value GetResourceSharesAction RAM GetResourceShares action.
 * \value ListPrincipalsAction RAM ListPrincipals action.
 * \value ListResourcesAction RAM ListResources action.
 * \value RejectResourceShareInvitationAction RAM RejectResourceShareInvitation action.
 * \value TagResourceAction RAM TagResource action.
 * \value UntagResourceAction RAM UntagResource action.
 * \value UpdateResourceShareAction RAM UpdateResourceShare action.
 */

/*!
 * Constructs a RamRequest object for RAM \a action.
 */
RamRequest::RamRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RamRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RamRequest::RamRequest(const RamRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RamRequest object to be equal to \a other.
 */
RamRequest& RamRequest::operator=(const RamRequest &other)
{
    Q_D(RamRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RamRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RamRequestPrivate.
 */
RamRequest::RamRequest(RamRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the RAM action to be performed by this request.
 */
RamRequest::Action RamRequest::action() const
{
    Q_D(const RamRequest);
    return d->action;
}

/*!
 * Returns the name of the RAM action to be performed by this request.
 */
QString RamRequest::actionString() const
{
    return RamRequestPrivate::toString(action());
}

/*!
 * Returns the RAM API version implemented by this request.
 */
QString RamRequest::apiVersion() const
{
    Q_D(const RamRequest);
    return d->apiVersion;
}

/*!
 * Sets the RAM action to be performed by this request to \a action.
 */
void RamRequest::setAction(const Action action)
{
    Q_D(RamRequest);
    d->action = action;
}

/*!
 * Sets the RAM API version to include in this request to \a version.
 */
void RamRequest::setApiVersion(const QString &version)
{
    Q_D(RamRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool RamRequest::operator==(const RamRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid RAM queue name.
 *
 * @par From RAM FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid RAM queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RamRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RamRequest::clearParameter(const QString &name)
{
    Q_D(RamRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RamRequest::clearParameters()
{
    Q_D(RamRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RamRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RamRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RamRequest::parameters() const
{
    Q_D(const RamRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RamRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RamRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RamRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RamRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the RAM request using the given
 * \a endpoint.
 *
 * This RAM implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RamRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RamRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::RAM::RamRequestPrivate
 * \brief The RamRequestPrivate class provides private implementation for RamRequest.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a RamRequestPrivate object for RAM \a action,
 * with public implementation \a q.
 */
RamRequestPrivate::RamRequestPrivate(const RamRequest::Action action, RamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RamRequest class's copy constructor.
 */
RamRequestPrivate::RamRequestPrivate(const RamRequestPrivate &other,
                                     RamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RamRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the RAM service's Action
 * query parameters.
 */
QString RamRequestPrivate::toString(const RamRequest::Action &action)
{
    #define ActionToString(action) \
        case RamRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace RAM
} // namespace QtAws
