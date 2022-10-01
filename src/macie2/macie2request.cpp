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

#include "macie2request.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::Macie2Request
 * \brief The Macie2Request class provides an interface for Macie2 requests.
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * \enum Macie2Request::Action
 *
 * This enum describes the actions that can be performed as Macie2
 * requests.
 *
 * \value AcceptInvitationAction Macie2 AcceptInvitation action.
 * \value BatchGetCustomDataIdentifiersAction Macie2 BatchGetCustomDataIdentifiers action.
 * \value CreateAllowListAction Macie2 CreateAllowList action.
 * \value CreateClassificationJobAction Macie2 CreateClassificationJob action.
 * \value CreateCustomDataIdentifierAction Macie2 CreateCustomDataIdentifier action.
 * \value CreateFindingsFilterAction Macie2 CreateFindingsFilter action.
 * \value CreateInvitationsAction Macie2 CreateInvitations action.
 * \value CreateMemberAction Macie2 CreateMember action.
 * \value CreateSampleFindingsAction Macie2 CreateSampleFindings action.
 * \value DeclineInvitationsAction Macie2 DeclineInvitations action.
 * \value DeleteAllowListAction Macie2 DeleteAllowList action.
 * \value DeleteCustomDataIdentifierAction Macie2 DeleteCustomDataIdentifier action.
 * \value DeleteFindingsFilterAction Macie2 DeleteFindingsFilter action.
 * \value DeleteInvitationsAction Macie2 DeleteInvitations action.
 * \value DeleteMemberAction Macie2 DeleteMember action.
 * \value DescribeBucketsAction Macie2 DescribeBuckets action.
 * \value DescribeClassificationJobAction Macie2 DescribeClassificationJob action.
 * \value DescribeOrganizationConfigurationAction Macie2 DescribeOrganizationConfiguration action.
 * \value DisableMacieAction Macie2 DisableMacie action.
 * \value DisableOrganizationAdminAccountAction Macie2 DisableOrganizationAdminAccount action.
 * \value DisassociateFromAdministratorAccountAction Macie2 DisassociateFromAdministratorAccount action.
 * \value DisassociateFromMasterAccountAction Macie2 DisassociateFromMasterAccount action.
 * \value DisassociateMemberAction Macie2 DisassociateMember action.
 * \value EnableMacieAction Macie2 EnableMacie action.
 * \value EnableOrganizationAdminAccountAction Macie2 EnableOrganizationAdminAccount action.
 * \value GetAdministratorAccountAction Macie2 GetAdministratorAccount action.
 * \value GetAllowListAction Macie2 GetAllowList action.
 * \value GetBucketStatisticsAction Macie2 GetBucketStatistics action.
 * \value GetClassificationExportConfigurationAction Macie2 GetClassificationExportConfiguration action.
 * \value GetCustomDataIdentifierAction Macie2 GetCustomDataIdentifier action.
 * \value GetFindingStatisticsAction Macie2 GetFindingStatistics action.
 * \value GetFindingsAction Macie2 GetFindings action.
 * \value GetFindingsFilterAction Macie2 GetFindingsFilter action.
 * \value GetFindingsPublicationConfigurationAction Macie2 GetFindingsPublicationConfiguration action.
 * \value GetInvitationsCountAction Macie2 GetInvitationsCount action.
 * \value GetMacieSessionAction Macie2 GetMacieSession action.
 * \value GetMasterAccountAction Macie2 GetMasterAccount action.
 * \value GetMemberAction Macie2 GetMember action.
 * \value GetRevealConfigurationAction Macie2 GetRevealConfiguration action.
 * \value GetSensitiveDataOccurrencesAction Macie2 GetSensitiveDataOccurrences action.
 * \value GetSensitiveDataOccurrencesAvailabilityAction Macie2 GetSensitiveDataOccurrencesAvailability action.
 * \value GetUsageStatisticsAction Macie2 GetUsageStatistics action.
 * \value GetUsageTotalsAction Macie2 GetUsageTotals action.
 * \value ListAllowListsAction Macie2 ListAllowLists action.
 * \value ListClassificationJobsAction Macie2 ListClassificationJobs action.
 * \value ListCustomDataIdentifiersAction Macie2 ListCustomDataIdentifiers action.
 * \value ListFindingsAction Macie2 ListFindings action.
 * \value ListFindingsFiltersAction Macie2 ListFindingsFilters action.
 * \value ListInvitationsAction Macie2 ListInvitations action.
 * \value ListManagedDataIdentifiersAction Macie2 ListManagedDataIdentifiers action.
 * \value ListMembersAction Macie2 ListMembers action.
 * \value ListOrganizationAdminAccountsAction Macie2 ListOrganizationAdminAccounts action.
 * \value ListTagsForResourceAction Macie2 ListTagsForResource action.
 * \value PutClassificationExportConfigurationAction Macie2 PutClassificationExportConfiguration action.
 * \value PutFindingsPublicationConfigurationAction Macie2 PutFindingsPublicationConfiguration action.
 * \value SearchResourcesAction Macie2 SearchResources action.
 * \value TagResourceAction Macie2 TagResource action.
 * \value TestCustomDataIdentifierAction Macie2 TestCustomDataIdentifier action.
 * \value UntagResourceAction Macie2 UntagResource action.
 * \value UpdateAllowListAction Macie2 UpdateAllowList action.
 * \value UpdateClassificationJobAction Macie2 UpdateClassificationJob action.
 * \value UpdateFindingsFilterAction Macie2 UpdateFindingsFilter action.
 * \value UpdateMacieSessionAction Macie2 UpdateMacieSession action.
 * \value UpdateMemberSessionAction Macie2 UpdateMemberSession action.
 * \value UpdateOrganizationConfigurationAction Macie2 UpdateOrganizationConfiguration action.
 * \value UpdateRevealConfigurationAction Macie2 UpdateRevealConfiguration action.
 */

/*!
 * Constructs a Macie2Request object for Macie2 \a action.
 */
Macie2Request::Macie2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Macie2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Macie2Request::Macie2Request(const Macie2Request &other)
    : QtAws::Core::AwsAbstractRequest(new Macie2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Macie2Request object to be equal to \a other.
 */
Macie2Request& Macie2Request::operator=(const Macie2Request &other)
{
    Q_D(Macie2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Macie2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Macie2RequestPrivate.
 */
Macie2Request::Macie2Request(Macie2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Macie2 action to be performed by this request.
 */
Macie2Request::Action Macie2Request::action() const
{
    Q_D(const Macie2Request);
    return d->action;
}

/*!
 * Returns the name of the Macie2 action to be performed by this request.
 */
QString Macie2Request::actionString() const
{
    return Macie2RequestPrivate::toString(action());
}

/*!
 * Returns the Macie2 API version implemented by this request.
 */
QString Macie2Request::apiVersion() const
{
    Q_D(const Macie2Request);
    return d->apiVersion;
}

/*!
 * Sets the Macie2 action to be performed by this request to \a action.
 */
void Macie2Request::setAction(const Action action)
{
    Q_D(Macie2Request);
    d->action = action;
}

/*!
 * Sets the Macie2 API version to include in this request to \a version.
 */
void Macie2Request::setApiVersion(const QString &version)
{
    Q_D(Macie2Request);
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
bool Macie2Request::operator==(const Macie2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Macie2 queue name.
 *
 * @par From Macie2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Macie2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Macie2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Macie2Request::clearParameter(const QString &name)
{
    Q_D(Macie2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Macie2Request::clearParameters()
{
    Q_D(Macie2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Macie2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Macie2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Macie2Request::parameters() const
{
    Q_D(const Macie2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Macie2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Macie2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Macie2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(Macie2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Macie2 request using the given
 * \a endpoint.
 *
 * This Macie2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Macie2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Macie2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Macie2::Macie2RequestPrivate
 * \brief The Macie2RequestPrivate class provides private implementation for Macie2Request.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a Macie2RequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
Macie2RequestPrivate::Macie2RequestPrivate(const Macie2Request::Action action, Macie2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-01-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Macie2Request class's copy constructor.
 */
Macie2RequestPrivate::Macie2RequestPrivate(const Macie2RequestPrivate &other,
                                     Macie2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Macie2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the Macie2 service's Action
 * query parameters.
 */
QString Macie2RequestPrivate::toString(const Macie2Request::Action &action)
{
    #define ActionToString(action) \
        case Macie2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptInvitation);
        ActionToString(BatchGetCustomDataIdentifiers);
        ActionToString(CreateAllowList);
        ActionToString(CreateClassificationJob);
        ActionToString(CreateCustomDataIdentifier);
        ActionToString(CreateFindingsFilter);
        ActionToString(CreateInvitations);
        ActionToString(CreateMember);
        ActionToString(CreateSampleFindings);
        ActionToString(DeclineInvitations);
        ActionToString(DeleteAllowList);
        ActionToString(DeleteCustomDataIdentifier);
        ActionToString(DeleteFindingsFilter);
        ActionToString(DeleteInvitations);
        ActionToString(DeleteMember);
        ActionToString(DescribeBuckets);
        ActionToString(DescribeClassificationJob);
        ActionToString(DescribeOrganizationConfiguration);
        ActionToString(DisableMacie);
        ActionToString(DisableOrganizationAdminAccount);
        ActionToString(DisassociateFromAdministratorAccount);
        ActionToString(DisassociateFromMasterAccount);
        ActionToString(DisassociateMember);
        ActionToString(EnableMacie);
        ActionToString(EnableOrganizationAdminAccount);
        ActionToString(GetAdministratorAccount);
        ActionToString(GetAllowList);
        ActionToString(GetBucketStatistics);
        ActionToString(GetClassificationExportConfiguration);
        ActionToString(GetCustomDataIdentifier);
        ActionToString(GetFindingStatistics);
        ActionToString(GetFindings);
        ActionToString(GetFindingsFilter);
        ActionToString(GetFindingsPublicationConfiguration);
        ActionToString(GetInvitationsCount);
        ActionToString(GetMacieSession);
        ActionToString(GetMasterAccount);
        ActionToString(GetMember);
        ActionToString(GetRevealConfiguration);
        ActionToString(GetSensitiveDataOccurrences);
        ActionToString(GetSensitiveDataOccurrencesAvailability);
        ActionToString(GetUsageStatistics);
        ActionToString(GetUsageTotals);
        ActionToString(ListAllowLists);
        ActionToString(ListClassificationJobs);
        ActionToString(ListCustomDataIdentifiers);
        ActionToString(ListFindings);
        ActionToString(ListFindingsFilters);
        ActionToString(ListInvitations);
        ActionToString(ListManagedDataIdentifiers);
        ActionToString(ListMembers);
        ActionToString(ListOrganizationAdminAccounts);
        ActionToString(ListTagsForResource);
        ActionToString(PutClassificationExportConfiguration);
        ActionToString(PutFindingsPublicationConfiguration);
        ActionToString(SearchResources);
        ActionToString(TagResource);
        ActionToString(TestCustomDataIdentifier);
        ActionToString(UntagResource);
        ActionToString(UpdateAllowList);
        ActionToString(UpdateClassificationJob);
        ActionToString(UpdateFindingsFilter);
        ActionToString(UpdateMacieSession);
        ActionToString(UpdateMemberSession);
        ActionToString(UpdateOrganizationConfiguration);
        ActionToString(UpdateRevealConfiguration);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Macie2
} // namespace QtAws
