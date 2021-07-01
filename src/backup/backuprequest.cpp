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

#include "backuprequest.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::BackupRequest
 * \brief The BackupRequest class provides an interface for Backup requests.
 *
 * \inmodule QtAwsBackup
 */

/*!
 * \enum BackupRequest::Action
 *
 * This enum describes the actions that can be performed as Backup
 * requests.
 *
 * \value CreateBackupPlanAction Backup CreateBackupPlan action.
 * \value CreateBackupSelectionAction Backup CreateBackupSelection action.
 * \value CreateBackupVaultAction Backup CreateBackupVault action.
 * \value DeleteBackupPlanAction Backup DeleteBackupPlan action.
 * \value DeleteBackupSelectionAction Backup DeleteBackupSelection action.
 * \value DeleteBackupVaultAction Backup DeleteBackupVault action.
 * \value DeleteBackupVaultAccessPolicyAction Backup DeleteBackupVaultAccessPolicy action.
 * \value DeleteBackupVaultNotificationsAction Backup DeleteBackupVaultNotifications action.
 * \value DeleteRecoveryPointAction Backup DeleteRecoveryPoint action.
 * \value DescribeBackupJobAction Backup DescribeBackupJob action.
 * \value DescribeBackupVaultAction Backup DescribeBackupVault action.
 * \value DescribeCopyJobAction Backup DescribeCopyJob action.
 * \value DescribeGlobalSettingsAction Backup DescribeGlobalSettings action.
 * \value DescribeProtectedResourceAction Backup DescribeProtectedResource action.
 * \value DescribeRecoveryPointAction Backup DescribeRecoveryPoint action.
 * \value DescribeRegionSettingsAction Backup DescribeRegionSettings action.
 * \value DescribeRestoreJobAction Backup DescribeRestoreJob action.
 * \value DisassociateRecoveryPointAction Backup DisassociateRecoveryPoint action.
 * \value ExportBackupPlanTemplateAction Backup ExportBackupPlanTemplate action.
 * \value GetBackupPlanAction Backup GetBackupPlan action.
 * \value GetBackupPlanFromJSONAction Backup GetBackupPlanFromJSON action.
 * \value GetBackupPlanFromTemplateAction Backup GetBackupPlanFromTemplate action.
 * \value GetBackupSelectionAction Backup GetBackupSelection action.
 * \value GetBackupVaultAccessPolicyAction Backup GetBackupVaultAccessPolicy action.
 * \value GetBackupVaultNotificationsAction Backup GetBackupVaultNotifications action.
 * \value GetRecoveryPointRestoreMetadataAction Backup GetRecoveryPointRestoreMetadata action.
 * \value GetSupportedResourceTypesAction Backup GetSupportedResourceTypes action.
 * \value ListBackupJobsAction Backup ListBackupJobs action.
 * \value ListBackupPlanTemplatesAction Backup ListBackupPlanTemplates action.
 * \value ListBackupPlanVersionsAction Backup ListBackupPlanVersions action.
 * \value ListBackupPlansAction Backup ListBackupPlans action.
 * \value ListBackupSelectionsAction Backup ListBackupSelections action.
 * \value ListBackupVaultsAction Backup ListBackupVaults action.
 * \value ListCopyJobsAction Backup ListCopyJobs action.
 * \value ListProtectedResourcesAction Backup ListProtectedResources action.
 * \value ListRecoveryPointsByBackupVaultAction Backup ListRecoveryPointsByBackupVault action.
 * \value ListRecoveryPointsByResourceAction Backup ListRecoveryPointsByResource action.
 * \value ListRestoreJobsAction Backup ListRestoreJobs action.
 * \value ListTagsAction Backup ListTags action.
 * \value PutBackupVaultAccessPolicyAction Backup PutBackupVaultAccessPolicy action.
 * \value PutBackupVaultNotificationsAction Backup PutBackupVaultNotifications action.
 * \value StartBackupJobAction Backup StartBackupJob action.
 * \value StartCopyJobAction Backup StartCopyJob action.
 * \value StartRestoreJobAction Backup StartRestoreJob action.
 * \value StopBackupJobAction Backup StopBackupJob action.
 * \value TagResourceAction Backup TagResource action.
 * \value UntagResourceAction Backup UntagResource action.
 * \value UpdateBackupPlanAction Backup UpdateBackupPlan action.
 * \value UpdateGlobalSettingsAction Backup UpdateGlobalSettings action.
 * \value UpdateRecoveryPointLifecycleAction Backup UpdateRecoveryPointLifecycle action.
 * \value UpdateRegionSettingsAction Backup UpdateRegionSettings action.
 */

/*!
 * Constructs a BackupRequest object for Backup \a action.
 */
BackupRequest::BackupRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new BackupRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
BackupRequest::BackupRequest(const BackupRequest &other)
    : QtAws::Core::AwsAbstractRequest(new BackupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the BackupRequest object to be equal to \a other.
 */
BackupRequest& BackupRequest::operator=(const BackupRequest &other)
{
    Q_D(BackupRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa BackupRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BackupRequestPrivate.
 */
BackupRequest::BackupRequest(BackupRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Backup action to be performed by this request.
 */
BackupRequest::Action BackupRequest::action() const
{
    Q_D(const BackupRequest);
    return d->action;
}

/*!
 * Returns the name of the Backup action to be performed by this request.
 */
QString BackupRequest::actionString() const
{
    return BackupRequestPrivate::toString(action());
}

/*!
 * Returns the Backup API version implemented by this request.
 */
QString BackupRequest::apiVersion() const
{
    Q_D(const BackupRequest);
    return d->apiVersion;
}

/*!
 * Sets the Backup action to be performed by this request to \a action.
 */
void BackupRequest::setAction(const Action action)
{
    Q_D(BackupRequest);
    d->action = action;
}

/*!
 * Sets the Backup API version to include in this request to \a version.
 */
void BackupRequest::setApiVersion(const QString &version)
{
    Q_D(BackupRequest);
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
bool BackupRequest::operator==(const BackupRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Backup queue name.
 *
 * @par From Backup FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Backup queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool BackupRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int BackupRequest::clearParameter(const QString &name)
{
    Q_D(BackupRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void BackupRequest::clearParameters()
{
    Q_D(BackupRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant BackupRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const BackupRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &BackupRequest::parameters() const
{
    Q_D(const BackupRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void BackupRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(BackupRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void BackupRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(BackupRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Backup request using the given
 * \a endpoint.
 *
 * This Backup implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest BackupRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const BackupRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Backup::BackupRequestPrivate
 * \brief The BackupRequestPrivate class provides private implementation for BackupRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a BackupRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
BackupRequestPrivate::BackupRequestPrivate(const BackupRequest::Action action, BackupRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the BackupRequest class's copy constructor.
 */
BackupRequestPrivate::BackupRequestPrivate(const BackupRequestPrivate &other,
                                     BackupRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts BackupRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Backup service's Action
 * query parameters.
 */
QString BackupRequestPrivate::toString(const BackupRequest::Action &action)
{
    #define ActionToString(action) \
        case BackupRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateBackupPlan);
        ActionToString(CreateBackupSelection);
        ActionToString(CreateBackupVault);
        ActionToString(DeleteBackupPlan);
        ActionToString(DeleteBackupSelection);
        ActionToString(DeleteBackupVault);
        ActionToString(DeleteBackupVaultAccessPolicy);
        ActionToString(DeleteBackupVaultNotifications);
        ActionToString(DeleteRecoveryPoint);
        ActionToString(DescribeBackupJob);
        ActionToString(DescribeBackupVault);
        ActionToString(DescribeCopyJob);
        ActionToString(DescribeGlobalSettings);
        ActionToString(DescribeProtectedResource);
        ActionToString(DescribeRecoveryPoint);
        ActionToString(DescribeRegionSettings);
        ActionToString(DescribeRestoreJob);
        ActionToString(DisassociateRecoveryPoint);
        ActionToString(ExportBackupPlanTemplate);
        ActionToString(GetBackupPlan);
        ActionToString(GetBackupPlanFromJSON);
        ActionToString(GetBackupPlanFromTemplate);
        ActionToString(GetBackupSelection);
        ActionToString(GetBackupVaultAccessPolicy);
        ActionToString(GetBackupVaultNotifications);
        ActionToString(GetRecoveryPointRestoreMetadata);
        ActionToString(GetSupportedResourceTypes);
        ActionToString(ListBackupJobs);
        ActionToString(ListBackupPlanTemplates);
        ActionToString(ListBackupPlanVersions);
        ActionToString(ListBackupPlans);
        ActionToString(ListBackupSelections);
        ActionToString(ListBackupVaults);
        ActionToString(ListCopyJobs);
        ActionToString(ListProtectedResources);
        ActionToString(ListRecoveryPointsByBackupVault);
        ActionToString(ListRecoveryPointsByResource);
        ActionToString(ListRestoreJobs);
        ActionToString(ListTags);
        ActionToString(PutBackupVaultAccessPolicy);
        ActionToString(PutBackupVaultNotifications);
        ActionToString(StartBackupJob);
        ActionToString(StartCopyJob);
        ActionToString(StartRestoreJob);
        ActionToString(StopBackupJob);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateBackupPlan);
        ActionToString(UpdateGlobalSettings);
        ActionToString(UpdateRecoveryPointLifecycle);
        ActionToString(UpdateRegionSettings);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Backup
} // namespace QtAws
