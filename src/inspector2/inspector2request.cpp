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

#include "inspector2request.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::Inspector2Request
 * \brief The Inspector2Request class provides an interface for Inspector2 requests.
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * \enum Inspector2Request::Action
 *
 * This enum describes the actions that can be performed as Inspector2
 * requests.
 *
 * \value AssociateMemberAction Inspector2 AssociateMember action.
 * \value BatchGetAccountStatusAction Inspector2 BatchGetAccountStatus action.
 * \value BatchGetFreeTrialInfoAction Inspector2 BatchGetFreeTrialInfo action.
 * \value CancelFindingsReportAction Inspector2 CancelFindingsReport action.
 * \value CreateFilterAction Inspector2 CreateFilter action.
 * \value CreateFindingsReportAction Inspector2 CreateFindingsReport action.
 * \value DeleteFilterAction Inspector2 DeleteFilter action.
 * \value DescribeOrganizationConfigurationAction Inspector2 DescribeOrganizationConfiguration action.
 * \value DisableAction Inspector2 Disable action.
 * \value DisableDelegatedAdminAccountAction Inspector2 DisableDelegatedAdminAccount action.
 * \value DisassociateMemberAction Inspector2 DisassociateMember action.
 * \value EnableAction Inspector2 Enable action.
 * \value EnableDelegatedAdminAccountAction Inspector2 EnableDelegatedAdminAccount action.
 * \value GetConfigurationAction Inspector2 GetConfiguration action.
 * \value GetDelegatedAdminAccountAction Inspector2 GetDelegatedAdminAccount action.
 * \value GetFindingsReportStatusAction Inspector2 GetFindingsReportStatus action.
 * \value GetMemberAction Inspector2 GetMember action.
 * \value ListAccountPermissionsAction Inspector2 ListAccountPermissions action.
 * \value ListCoverageAction Inspector2 ListCoverage action.
 * \value ListCoverageStatisticsAction Inspector2 ListCoverageStatistics action.
 * \value ListDelegatedAdminAccountsAction Inspector2 ListDelegatedAdminAccounts action.
 * \value ListFiltersAction Inspector2 ListFilters action.
 * \value ListFindingAggregationsAction Inspector2 ListFindingAggregations action.
 * \value ListFindingsAction Inspector2 ListFindings action.
 * \value ListMembersAction Inspector2 ListMembers action.
 * \value ListTagsForResourceAction Inspector2 ListTagsForResource action.
 * \value ListUsageTotalsAction Inspector2 ListUsageTotals action.
 * \value TagResourceAction Inspector2 TagResource action.
 * \value UntagResourceAction Inspector2 UntagResource action.
 * \value UpdateConfigurationAction Inspector2 UpdateConfiguration action.
 * \value UpdateFilterAction Inspector2 UpdateFilter action.
 * \value UpdateOrganizationConfigurationAction Inspector2 UpdateOrganizationConfiguration action.
 */

/*!
 * Constructs a Inspector2Request object for Inspector2 \a action.
 */
Inspector2Request::Inspector2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Inspector2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Inspector2Request::Inspector2Request(const Inspector2Request &other)
    : QtAws::Core::AwsAbstractRequest(new Inspector2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Inspector2Request object to be equal to \a other.
 */
Inspector2Request& Inspector2Request::operator=(const Inspector2Request &other)
{
    Q_D(Inspector2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Inspector2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Inspector2RequestPrivate.
 */
Inspector2Request::Inspector2Request(Inspector2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Inspector2 action to be performed by this request.
 */
Inspector2Request::Action Inspector2Request::action() const
{
    Q_D(const Inspector2Request);
    return d->action;
}

/*!
 * Returns the name of the Inspector2 action to be performed by this request.
 */
QString Inspector2Request::actionString() const
{
    return Inspector2RequestPrivate::toString(action());
}

/*!
 * Returns the Inspector2 API version implemented by this request.
 */
QString Inspector2Request::apiVersion() const
{
    Q_D(const Inspector2Request);
    return d->apiVersion;
}

/*!
 * Sets the Inspector2 action to be performed by this request to \a action.
 */
void Inspector2Request::setAction(const Action action)
{
    Q_D(Inspector2Request);
    d->action = action;
}

/*!
 * Sets the Inspector2 API version to include in this request to \a version.
 */
void Inspector2Request::setApiVersion(const QString &version)
{
    Q_D(Inspector2Request);
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
bool Inspector2Request::operator==(const Inspector2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Inspector2 queue name.
 *
 * @par From Inspector2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Inspector2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Inspector2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Inspector2Request::clearParameter(const QString &name)
{
    Q_D(Inspector2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Inspector2Request::clearParameters()
{
    Q_D(Inspector2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Inspector2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Inspector2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Inspector2Request::parameters() const
{
    Q_D(const Inspector2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Inspector2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Inspector2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Inspector2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(Inspector2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Inspector2 request using the given
 * \a endpoint.
 *
 * This Inspector2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Inspector2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Inspector2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Inspector2::Inspector2RequestPrivate
 * \brief The Inspector2RequestPrivate class provides private implementation for Inspector2Request.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a Inspector2RequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
Inspector2RequestPrivate::Inspector2RequestPrivate(const Inspector2Request::Action action, Inspector2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-06-08"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Inspector2Request class's copy constructor.
 */
Inspector2RequestPrivate::Inspector2RequestPrivate(const Inspector2RequestPrivate &other,
                                     Inspector2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Inspector2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the Inspector2 service's Action
 * query parameters.
 */
QString Inspector2RequestPrivate::toString(const Inspector2Request::Action &action)
{
    #define ActionToString(action) \
        case Inspector2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateMember);
        ActionToString(BatchGetAccountStatus);
        ActionToString(BatchGetFreeTrialInfo);
        ActionToString(CancelFindingsReport);
        ActionToString(CreateFilter);
        ActionToString(CreateFindingsReport);
        ActionToString(DeleteFilter);
        ActionToString(DescribeOrganizationConfiguration);
        ActionToString(Disable);
        ActionToString(DisableDelegatedAdminAccount);
        ActionToString(DisassociateMember);
        ActionToString(Enable);
        ActionToString(EnableDelegatedAdminAccount);
        ActionToString(GetConfiguration);
        ActionToString(GetDelegatedAdminAccount);
        ActionToString(GetFindingsReportStatus);
        ActionToString(GetMember);
        ActionToString(ListAccountPermissions);
        ActionToString(ListCoverage);
        ActionToString(ListCoverageStatistics);
        ActionToString(ListDelegatedAdminAccounts);
        ActionToString(ListFilters);
        ActionToString(ListFindingAggregations);
        ActionToString(ListFindings);
        ActionToString(ListMembers);
        ActionToString(ListTagsForResource);
        ActionToString(ListUsageTotals);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateConfiguration);
        ActionToString(UpdateFilter);
        ActionToString(UpdateOrganizationConfiguration);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Inspector2
} // namespace QtAws
