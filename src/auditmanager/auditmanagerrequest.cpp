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

#include "auditmanagerrequest.h"
#include "auditmanagerrequest_p.h"

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::AuditManagerRequest
 * \brief The AuditManagerRequest class provides an interface for AuditManager requests.
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * \enum AuditManagerRequest::Action
 *
 * This enum describes the actions that can be performed as AuditManager
 * requests.
 *
 * \value AssociateAssessmentReportEvidenceFolderAction AuditManager AssociateAssessmentReportEvidenceFolder action.
 * \value BatchAssociateAssessmentReportEvidenceAction AuditManager BatchAssociateAssessmentReportEvidence action.
 * \value BatchCreateDelegationByAssessmentAction AuditManager BatchCreateDelegationByAssessment action.
 * \value BatchDeleteDelegationByAssessmentAction AuditManager BatchDeleteDelegationByAssessment action.
 * \value BatchDisassociateAssessmentReportEvidenceAction AuditManager BatchDisassociateAssessmentReportEvidence action.
 * \value BatchImportEvidenceToAssessmentControlAction AuditManager BatchImportEvidenceToAssessmentControl action.
 * \value CreateAssessmentAction AuditManager CreateAssessment action.
 * \value CreateAssessmentFrameworkAction AuditManager CreateAssessmentFramework action.
 * \value CreateAssessmentReportAction AuditManager CreateAssessmentReport action.
 * \value CreateControlAction AuditManager CreateControl action.
 * \value DeleteAssessmentAction AuditManager DeleteAssessment action.
 * \value DeleteAssessmentFrameworkAction AuditManager DeleteAssessmentFramework action.
 * \value DeleteAssessmentReportAction AuditManager DeleteAssessmentReport action.
 * \value DeleteControlAction AuditManager DeleteControl action.
 * \value DeregisterAccountAction AuditManager DeregisterAccount action.
 * \value DeregisterOrganizationAdminAccountAction AuditManager DeregisterOrganizationAdminAccount action.
 * \value DisassociateAssessmentReportEvidenceFolderAction AuditManager DisassociateAssessmentReportEvidenceFolder action.
 * \value GetAccountStatusAction AuditManager GetAccountStatus action.
 * \value GetAssessmentAction AuditManager GetAssessment action.
 * \value GetAssessmentFrameworkAction AuditManager GetAssessmentFramework action.
 * \value GetAssessmentReportUrlAction AuditManager GetAssessmentReportUrl action.
 * \value GetChangeLogsAction AuditManager GetChangeLogs action.
 * \value GetControlAction AuditManager GetControl action.
 * \value GetDelegationsAction AuditManager GetDelegations action.
 * \value GetEvidenceAction AuditManager GetEvidence action.
 * \value GetEvidenceByEvidenceFolderAction AuditManager GetEvidenceByEvidenceFolder action.
 * \value GetEvidenceFolderAction AuditManager GetEvidenceFolder action.
 * \value GetEvidenceFoldersByAssessmentAction AuditManager GetEvidenceFoldersByAssessment action.
 * \value GetEvidenceFoldersByAssessmentControlAction AuditManager GetEvidenceFoldersByAssessmentControl action.
 * \value GetOrganizationAdminAccountAction AuditManager GetOrganizationAdminAccount action.
 * \value GetServicesInScopeAction AuditManager GetServicesInScope action.
 * \value GetSettingsAction AuditManager GetSettings action.
 * \value ListAssessmentFrameworksAction AuditManager ListAssessmentFrameworks action.
 * \value ListAssessmentReportsAction AuditManager ListAssessmentReports action.
 * \value ListAssessmentsAction AuditManager ListAssessments action.
 * \value ListControlsAction AuditManager ListControls action.
 * \value ListKeywordsForDataSourceAction AuditManager ListKeywordsForDataSource action.
 * \value ListNotificationsAction AuditManager ListNotifications action.
 * \value ListTagsForResourceAction AuditManager ListTagsForResource action.
 * \value RegisterAccountAction AuditManager RegisterAccount action.
 * \value RegisterOrganizationAdminAccountAction AuditManager RegisterOrganizationAdminAccount action.
 * \value TagResourceAction AuditManager TagResource action.
 * \value UntagResourceAction AuditManager UntagResource action.
 * \value UpdateAssessmentAction AuditManager UpdateAssessment action.
 * \value UpdateAssessmentControlAction AuditManager UpdateAssessmentControl action.
 * \value UpdateAssessmentControlSetStatusAction AuditManager UpdateAssessmentControlSetStatus action.
 * \value UpdateAssessmentFrameworkAction AuditManager UpdateAssessmentFramework action.
 * \value UpdateAssessmentStatusAction AuditManager UpdateAssessmentStatus action.
 * \value UpdateControlAction AuditManager UpdateControl action.
 * \value UpdateSettingsAction AuditManager UpdateSettings action.
 * \value ValidateAssessmentReportIntegrityAction AuditManager ValidateAssessmentReportIntegrity action.
 */

/*!
 * Constructs a AuditManagerRequest object for AuditManager \a action.
 */
AuditManagerRequest::AuditManagerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AuditManagerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AuditManagerRequest::AuditManagerRequest(const AuditManagerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AuditManagerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AuditManagerRequest object to be equal to \a other.
 */
AuditManagerRequest& AuditManagerRequest::operator=(const AuditManagerRequest &other)
{
    Q_D(AuditManagerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AuditManagerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AuditManagerRequestPrivate.
 */
AuditManagerRequest::AuditManagerRequest(AuditManagerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AuditManager action to be performed by this request.
 */
AuditManagerRequest::Action AuditManagerRequest::action() const
{
    Q_D(const AuditManagerRequest);
    return d->action;
}

/*!
 * Returns the name of the AuditManager action to be performed by this request.
 */
QString AuditManagerRequest::actionString() const
{
    return AuditManagerRequestPrivate::toString(action());
}

/*!
 * Returns the AuditManager API version implemented by this request.
 */
QString AuditManagerRequest::apiVersion() const
{
    Q_D(const AuditManagerRequest);
    return d->apiVersion;
}

/*!
 * Sets the AuditManager action to be performed by this request to \a action.
 */
void AuditManagerRequest::setAction(const Action action)
{
    Q_D(AuditManagerRequest);
    d->action = action;
}

/*!
 * Sets the AuditManager API version to include in this request to \a version.
 */
void AuditManagerRequest::setApiVersion(const QString &version)
{
    Q_D(AuditManagerRequest);
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
bool AuditManagerRequest::operator==(const AuditManagerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AuditManager queue name.
 *
 * @par From AuditManager FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AuditManager queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AuditManagerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AuditManagerRequest::clearParameter(const QString &name)
{
    Q_D(AuditManagerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AuditManagerRequest::clearParameters()
{
    Q_D(AuditManagerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AuditManagerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AuditManagerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AuditManagerRequest::parameters() const
{
    Q_D(const AuditManagerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AuditManagerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AuditManagerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AuditManagerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AuditManagerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AuditManager request using the given
 * \a endpoint.
 *
 * This AuditManager implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AuditManagerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AuditManagerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AuditManager::AuditManagerRequestPrivate
 * \brief The AuditManagerRequestPrivate class provides private implementation for AuditManagerRequest.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a AuditManagerRequestPrivate object for AuditManager \a action,
 * with public implementation \a q.
 */
AuditManagerRequestPrivate::AuditManagerRequestPrivate(const AuditManagerRequest::Action action, AuditManagerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AuditManagerRequest class's copy constructor.
 */
AuditManagerRequestPrivate::AuditManagerRequestPrivate(const AuditManagerRequestPrivate &other,
                                     AuditManagerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AuditManagerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AuditManager service's Action
 * query parameters.
 */
QString AuditManagerRequestPrivate::toString(const AuditManagerRequest::Action &action)
{
    #define ActionToString(action) \
        case AuditManagerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateAssessmentReportEvidenceFolder);
        ActionToString(BatchAssociateAssessmentReportEvidence);
        ActionToString(BatchCreateDelegationByAssessment);
        ActionToString(BatchDeleteDelegationByAssessment);
        ActionToString(BatchDisassociateAssessmentReportEvidence);
        ActionToString(BatchImportEvidenceToAssessmentControl);
        ActionToString(CreateAssessment);
        ActionToString(CreateAssessmentFramework);
        ActionToString(CreateAssessmentReport);
        ActionToString(CreateControl);
        ActionToString(DeleteAssessment);
        ActionToString(DeleteAssessmentFramework);
        ActionToString(DeleteAssessmentReport);
        ActionToString(DeleteControl);
        ActionToString(DeregisterAccount);
        ActionToString(DeregisterOrganizationAdminAccount);
        ActionToString(DisassociateAssessmentReportEvidenceFolder);
        ActionToString(GetAccountStatus);
        ActionToString(GetAssessment);
        ActionToString(GetAssessmentFramework);
        ActionToString(GetAssessmentReportUrl);
        ActionToString(GetChangeLogs);
        ActionToString(GetControl);
        ActionToString(GetDelegations);
        ActionToString(GetEvidence);
        ActionToString(GetEvidenceByEvidenceFolder);
        ActionToString(GetEvidenceFolder);
        ActionToString(GetEvidenceFoldersByAssessment);
        ActionToString(GetEvidenceFoldersByAssessmentControl);
        ActionToString(GetOrganizationAdminAccount);
        ActionToString(GetServicesInScope);
        ActionToString(GetSettings);
        ActionToString(ListAssessmentFrameworks);
        ActionToString(ListAssessmentReports);
        ActionToString(ListAssessments);
        ActionToString(ListControls);
        ActionToString(ListKeywordsForDataSource);
        ActionToString(ListNotifications);
        ActionToString(ListTagsForResource);
        ActionToString(RegisterAccount);
        ActionToString(RegisterOrganizationAdminAccount);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAssessment);
        ActionToString(UpdateAssessmentControl);
        ActionToString(UpdateAssessmentControlSetStatus);
        ActionToString(UpdateAssessmentFramework);
        ActionToString(UpdateAssessmentStatus);
        ActionToString(UpdateControl);
        ActionToString(UpdateSettings);
        ActionToString(ValidateAssessmentReportIntegrity);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AuditManager
} // namespace QtAws
