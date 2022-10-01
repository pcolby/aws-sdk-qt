/*
    Copyright 2013-2021 Paul Colby

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

#include "rolesanywhererequest.h"
#include "rolesanywhererequest_p.h"

namespace QtAws {
namespace RolesAnywhere {

/*!
 * \class QtAws::RolesAnywhere::RolesAnywhereRequest
 * \brief The RolesAnywhereRequest class provides an interface for RolesAnywhere requests.
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * \enum RolesAnywhereRequest::Action
 *
 * This enum describes the actions that can be performed as RolesAnywhere
 * requests.
 *
 * \value CreateProfileAction RolesAnywhere CreateProfile action.
 * \value CreateTrustAnchorAction RolesAnywhere CreateTrustAnchor action.
 * \value DeleteCrlAction RolesAnywhere DeleteCrl action.
 * \value DeleteProfileAction RolesAnywhere DeleteProfile action.
 * \value DeleteTrustAnchorAction RolesAnywhere DeleteTrustAnchor action.
 * \value DisableCrlAction RolesAnywhere DisableCrl action.
 * \value DisableProfileAction RolesAnywhere DisableProfile action.
 * \value DisableTrustAnchorAction RolesAnywhere DisableTrustAnchor action.
 * \value EnableCrlAction RolesAnywhere EnableCrl action.
 * \value EnableProfileAction RolesAnywhere EnableProfile action.
 * \value EnableTrustAnchorAction RolesAnywhere EnableTrustAnchor action.
 * \value GetCrlAction RolesAnywhere GetCrl action.
 * \value GetProfileAction RolesAnywhere GetProfile action.
 * \value GetSubjectAction RolesAnywhere GetSubject action.
 * \value GetTrustAnchorAction RolesAnywhere GetTrustAnchor action.
 * \value ImportCrlAction RolesAnywhere ImportCrl action.
 * \value ListCrlsAction RolesAnywhere ListCrls action.
 * \value ListProfilesAction RolesAnywhere ListProfiles action.
 * \value ListSubjectsAction RolesAnywhere ListSubjects action.
 * \value ListTagsForResourceAction RolesAnywhere ListTagsForResource action.
 * \value ListTrustAnchorsAction RolesAnywhere ListTrustAnchors action.
 * \value TagResourceAction RolesAnywhere TagResource action.
 * \value UntagResourceAction RolesAnywhere UntagResource action.
 * \value UpdateCrlAction RolesAnywhere UpdateCrl action.
 * \value UpdateProfileAction RolesAnywhere UpdateProfile action.
 * \value UpdateTrustAnchorAction RolesAnywhere UpdateTrustAnchor action.
 */

/*!
 * Constructs a RolesAnywhereRequest object for RolesAnywhere \a action.
 */
RolesAnywhereRequest::RolesAnywhereRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RolesAnywhereRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RolesAnywhereRequest::RolesAnywhereRequest(const RolesAnywhereRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RolesAnywhereRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RolesAnywhereRequest object to be equal to \a other.
 */
RolesAnywhereRequest& RolesAnywhereRequest::operator=(const RolesAnywhereRequest &other)
{
    Q_D(RolesAnywhereRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RolesAnywhereRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RolesAnywhereRequestPrivate.
 */
RolesAnywhereRequest::RolesAnywhereRequest(RolesAnywhereRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the RolesAnywhere action to be performed by this request.
 */
RolesAnywhereRequest::Action RolesAnywhereRequest::action() const
{
    Q_D(const RolesAnywhereRequest);
    return d->action;
}

/*!
 * Returns the name of the RolesAnywhere action to be performed by this request.
 */
QString RolesAnywhereRequest::actionString() const
{
    return RolesAnywhereRequestPrivate::toString(action());
}

/*!
 * Returns the RolesAnywhere API version implemented by this request.
 */
QString RolesAnywhereRequest::apiVersion() const
{
    Q_D(const RolesAnywhereRequest);
    return d->apiVersion;
}

/*!
 * Sets the RolesAnywhere action to be performed by this request to \a action.
 */
void RolesAnywhereRequest::setAction(const Action action)
{
    Q_D(RolesAnywhereRequest);
    d->action = action;
}

/*!
 * Sets the RolesAnywhere API version to include in this request to \a version.
 */
void RolesAnywhereRequest::setApiVersion(const QString &version)
{
    Q_D(RolesAnywhereRequest);
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
bool RolesAnywhereRequest::operator==(const RolesAnywhereRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid RolesAnywhere queue name.
 *
 * @par From RolesAnywhere FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid RolesAnywhere queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RolesAnywhereRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RolesAnywhereRequest::clearParameter(const QString &name)
{
    Q_D(RolesAnywhereRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RolesAnywhereRequest::clearParameters()
{
    Q_D(RolesAnywhereRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RolesAnywhereRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RolesAnywhereRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RolesAnywhereRequest::parameters() const
{
    Q_D(const RolesAnywhereRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RolesAnywhereRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RolesAnywhereRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RolesAnywhereRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RolesAnywhereRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the RolesAnywhere request using the given
 * \a endpoint.
 *
 * This RolesAnywhere implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RolesAnywhereRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RolesAnywhereRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::RolesAnywhere::RolesAnywhereRequestPrivate
 * \brief The RolesAnywhereRequestPrivate class provides private implementation for RolesAnywhereRequest.
 * \internal
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a RolesAnywhereRequestPrivate object for RolesAnywhere \a action,
 * with public implementation \a q.
 */
RolesAnywhereRequestPrivate::RolesAnywhereRequestPrivate(const RolesAnywhereRequest::Action action, RolesAnywhereRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-05-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RolesAnywhereRequest class's copy constructor.
 */
RolesAnywhereRequestPrivate::RolesAnywhereRequestPrivate(const RolesAnywhereRequestPrivate &other,
                                     RolesAnywhereRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RolesAnywhereRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the RolesAnywhere service's Action
 * query parameters.
 */
QString RolesAnywhereRequestPrivate::toString(const RolesAnywhereRequest::Action &action)
{
    #define ActionToString(action) \
        case RolesAnywhereRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateProfile);
        ActionToString(CreateTrustAnchor);
        ActionToString(DeleteCrl);
        ActionToString(DeleteProfile);
        ActionToString(DeleteTrustAnchor);
        ActionToString(DisableCrl);
        ActionToString(DisableProfile);
        ActionToString(DisableTrustAnchor);
        ActionToString(EnableCrl);
        ActionToString(EnableProfile);
        ActionToString(EnableTrustAnchor);
        ActionToString(GetCrl);
        ActionToString(GetProfile);
        ActionToString(GetSubject);
        ActionToString(GetTrustAnchor);
        ActionToString(ImportCrl);
        ActionToString(ListCrls);
        ActionToString(ListProfiles);
        ActionToString(ListSubjects);
        ActionToString(ListTagsForResource);
        ActionToString(ListTrustAnchors);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateCrl);
        ActionToString(UpdateProfile);
        ActionToString(UpdateTrustAnchor);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace RolesAnywhere
} // namespace QtAws
