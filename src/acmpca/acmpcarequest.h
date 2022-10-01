// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACMPCAREQUEST_H
#define QTAWS_ACMPCAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsacmpcaglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AcmPca {

class AcmPcaRequestPrivate;

class QTAWSACMPCA_EXPORT AcmPcaRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AcmPca.
    enum Action {
        CreateCertificateAuthorityAction,
        CreateCertificateAuthorityAuditReportAction,
        CreatePermissionAction,
        DeleteCertificateAuthorityAction,
        DeletePermissionAction,
        DeletePolicyAction,
        DescribeCertificateAuthorityAction,
        DescribeCertificateAuthorityAuditReportAction,
        GetCertificateAction,
        GetCertificateAuthorityCertificateAction,
        GetCertificateAuthorityCsrAction,
        GetPolicyAction,
        ImportCertificateAuthorityCertificateAction,
        IssueCertificateAction,
        ListCertificateAuthoritiesAction,
        ListPermissionsAction,
        ListTagsAction,
        PutPolicyAction,
        RestoreCertificateAuthorityAction,
        RevokeCertificateAction,
        TagCertificateAuthorityAction,
        UntagCertificateAuthorityAction,
        UpdateCertificateAuthorityAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AcmPcaRequest(const Action action);
    AcmPcaRequest(const AcmPcaRequest &other);
    AcmPcaRequest &operator=(const AcmPcaRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AcmPcaRequest &other) const;


protected:
    /// @cond internal
    explicit AcmPcaRequest(AcmPcaRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcmPcaRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
