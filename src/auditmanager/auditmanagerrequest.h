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
        GetOrganizationAdminAccountAction,
        GetServicesInScopeAction,
        GetSettingsAction,
        ListAssessmentFrameworksAction,
        ListAssessmentReportsAction,
        ListAssessmentsAction,
        ListControlsAction,
        ListKeywordsForDataSourceAction,
        ListNotificationsAction,
        ListTagsForResourceAction,
        RegisterAccountAction,
        RegisterOrganizationAdminAccountAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAssessmentAction,
        UpdateAssessmentControlAction,
        UpdateAssessmentControlSetStatusAction,
        UpdateAssessmentFrameworkAction,
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
    AuditManagerRequestPrivate * const d_ptr; ///< Internal d-pointer.
    AuditManagerRequest(AuditManagerRequestPrivate * const d);
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
