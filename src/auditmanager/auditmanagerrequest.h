// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUDITMANAGERREQUEST_H
#define QTAWS_AUDITMANAGERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsauditmanagerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AuditManager {

class AuditManagerRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT AuditManagerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AuditManager.
    enum Action {
        AssociateAssessmentReportEvidenceFolderAction,
        BatchAssociateAssessmentReportEvidenceAction,
        BatchCreateDelegationByAssessmentAction,
        BatchDeleteDelegationByAssessmentAction,
        BatchDisassociateAssessmentReportEvidenceAction,
        BatchImportEvidenceToAssessmentControlAction,
        CreateAssessmentAction,
        CreateAssessmentFrameworkAction,
        CreateAssessmentReportAction,
        CreateControlAction,
        DeleteAssessmentAction,
        DeleteAssessmentFrameworkAction,
        DeleteAssessmentFrameworkShareAction,
        DeleteAssessmentReportAction,
        DeleteControlAction,
        DeregisterAccountAction,
        DeregisterOrganizationAdminAccountAction,
        DisassociateAssessmentReportEvidenceFolderAction,
        GetAccountStatusAction,
        GetAssessmentAction,
        GetAssessmentFrameworkAction,
        GetAssessmentReportUrlAction,
        GetChangeLogsAction,
        GetControlAction,
        GetDelegationsAction,
        GetEvidenceAction,
        GetEvidenceByEvidenceFolderAction,
        GetEvidenceFolderAction,
        GetEvidenceFoldersByAssessmentAction,
        GetEvidenceFoldersByAssessmentControlAction,
        GetInsightsAction,
        GetInsightsByAssessmentAction,
        GetOrganizationAdminAccountAction,
        GetServicesInScopeAction,
        GetSettingsAction,
        ListAssessmentControlInsightsByControlDomainAction,
        ListAssessmentFrameworkShareRequestsAction,
        ListAssessmentFrameworksAction,
        ListAssessmentReportsAction,
        ListAssessmentsAction,
        ListControlDomainInsightsAction,
        ListControlDomainInsightsByAssessmentAction,
        ListControlInsightsByControlDomainAction,
        ListControlsAction,
        ListKeywordsForDataSourceAction,
        ListNotificationsAction,
        ListTagsForResourceAction,
        RegisterAccountAction,
        RegisterOrganizationAdminAccountAction,
        StartAssessmentFrameworkShareAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAssessmentAction,
        UpdateAssessmentControlAction,
        UpdateAssessmentControlSetStatusAction,
        UpdateAssessmentFrameworkAction,
        UpdateAssessmentFrameworkShareAction,
        UpdateAssessmentStatusAction,
        UpdateControlAction,
        UpdateSettingsAction,
        ValidateAssessmentReportIntegrityAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AuditManagerRequest(const Action action);
    AuditManagerRequest(const AuditManagerRequest &other);
    AuditManagerRequest &operator=(const AuditManagerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AuditManagerRequest &other) const;


protected:
    /// @cond internal
    explicit AuditManagerRequest(AuditManagerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuditManagerRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
