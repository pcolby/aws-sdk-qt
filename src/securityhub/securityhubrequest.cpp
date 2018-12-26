/*
    Copyright 2013-2018 Paul Colby

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

#include "securityhubrequest.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::SecurityHubRequest
 * \brief The SecurityHubRequest class provides an interface for SecurityHub requests.
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * \enum SecurityHubRequest::Action
 *
 * This enum describes the actions that can be performed as SecurityHub
 * requests.
 *
 * \value AcceptInvitationAction SecurityHub AcceptInvitation action.
 * \value BatchDisableStandardsAction SecurityHub BatchDisableStandards action.
 * \value BatchEnableStandardsAction SecurityHub BatchEnableStandards action.
 * \value BatchImportFindingsAction SecurityHub BatchImportFindings action.
 * \value CreateInsightAction SecurityHub CreateInsight action.
 * \value CreateMembersAction SecurityHub CreateMembers action.
 * \value DeclineInvitationsAction SecurityHub DeclineInvitations action.
 * \value DeleteInsightAction SecurityHub DeleteInsight action.
 * \value DeleteInvitationsAction SecurityHub DeleteInvitations action.
 * \value DeleteMembersAction SecurityHub DeleteMembers action.
 * \value DisableImportFindingsForProductAction SecurityHub DisableImportFindingsForProduct action.
 * \value DisableSecurityHubAction SecurityHub DisableSecurityHub action.
 * \value DisassociateFromMasterAccountAction SecurityHub DisassociateFromMasterAccount action.
 * \value DisassociateMembersAction SecurityHub DisassociateMembers action.
 * \value EnableImportFindingsForProductAction SecurityHub EnableImportFindingsForProduct action.
 * \value EnableSecurityHubAction SecurityHub EnableSecurityHub action.
 * \value GetEnabledStandardsAction SecurityHub GetEnabledStandards action.
 * \value GetFindingsAction SecurityHub GetFindings action.
 * \value GetInsightResultsAction SecurityHub GetInsightResults action.
 * \value GetInsightsAction SecurityHub GetInsights action.
 * \value GetInvitationsCountAction SecurityHub GetInvitationsCount action.
 * \value GetMasterAccountAction SecurityHub GetMasterAccount action.
 * \value GetMembersAction SecurityHub GetMembers action.
 * \value InviteMembersAction SecurityHub InviteMembers action.
 * \value ListEnabledProductsForImportAction SecurityHub ListEnabledProductsForImport action.
 * \value ListInvitationsAction SecurityHub ListInvitations action.
 * \value ListMembersAction SecurityHub ListMembers action.
 * \value UpdateFindingsAction SecurityHub UpdateFindings action.
 * \value UpdateInsightAction SecurityHub UpdateInsight action.
 */

/*!
 * Constructs a SecurityHubRequest object for SecurityHub \a action.
 */
SecurityHubRequest::SecurityHubRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SecurityHubRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SecurityHubRequest::SecurityHubRequest(const SecurityHubRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SecurityHubRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SecurityHubRequest object to be equal to \a other.
 */
SecurityHubRequest& SecurityHubRequest::operator=(const SecurityHubRequest &other)
{
    Q_D(SecurityHubRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SecurityHubRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SecurityHubRequestPrivate.
 */
SecurityHubRequest::SecurityHubRequest(SecurityHubRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SecurityHub action to be performed by this request.
 */
SecurityHubRequest::Action SecurityHubRequest::action() const
{
    Q_D(const SecurityHubRequest);
    return d->action;
}

/*!
 * Returns the name of the SecurityHub action to be performed by this request.
 */
QString SecurityHubRequest::actionString() const
{
    return SecurityHubRequestPrivate::toString(action());
}

/*!
 * Returns the SecurityHub API version implemented by this request.
 */
QString SecurityHubRequest::apiVersion() const
{
    Q_D(const SecurityHubRequest);
    return d->apiVersion;
}

/*!
 * Sets the SecurityHub action to be performed by this request to \a action.
 */
void SecurityHubRequest::setAction(const Action action)
{
    Q_D(SecurityHubRequest);
    d->action = action;
}

/*!
 * Sets the SecurityHub API version to include in this request to \a version.
 */
void SecurityHubRequest::setApiVersion(const QString &version)
{
    Q_D(SecurityHubRequest);
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
bool SecurityHubRequest::operator==(const SecurityHubRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SecurityHub queue name.
 *
 * @par From SecurityHub FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SecurityHub queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SecurityHubRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SecurityHubRequest::clearParameter(const QString &name)
{
    Q_D(SecurityHubRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SecurityHubRequest::clearParameters()
{
    Q_D(SecurityHubRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SecurityHubRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SecurityHubRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SecurityHubRequest::parameters() const
{
    Q_D(const SecurityHubRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SecurityHubRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SecurityHubRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SecurityHubRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SecurityHubRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SecurityHub request using the given
 * \a endpoint.
 *
 * This SecurityHub implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SecurityHubRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SecurityHubRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SecurityHub::SecurityHubRequestPrivate
 * \brief The SecurityHubRequestPrivate class provides private implementation for SecurityHubRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a SecurityHubRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
SecurityHubRequestPrivate::SecurityHubRequestPrivate(const SecurityHubRequest::Action action, SecurityHubRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SecurityHubRequest class's copy constructor.
 */
SecurityHubRequestPrivate::SecurityHubRequestPrivate(const SecurityHubRequestPrivate &other,
                                     SecurityHubRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SecurityHubRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SecurityHub service's Action
 * query parameters.
 */
QString SecurityHubRequestPrivate::toString(const SecurityHubRequest::Action &action)
{
    #define ActionToString(action) \
        case SecurityHubRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SecurityHub
} // namespace QtAws
