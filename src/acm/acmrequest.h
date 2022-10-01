// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACMREQUEST_H
#define QTAWS_ACMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsacmglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Acm {

class AcmRequestPrivate;

class QTAWSACM_EXPORT AcmRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Acm.
    enum Action {
        AddTagsToCertificateAction,
        DeleteCertificateAction,
        DescribeCertificateAction,
        ExportCertificateAction,
        GetAccountConfigurationAction,
        GetCertificateAction,
        ImportCertificateAction,
        ListCertificatesAction,
        ListTagsForCertificateAction,
        PutAccountConfigurationAction,
        RemoveTagsFromCertificateAction,
        RenewCertificateAction,
        RequestCertificateAction,
        ResendValidationEmailAction,
        UpdateCertificateOptionsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AcmRequest(const Action action);
    AcmRequest(const AcmRequest &other);
    AcmRequest &operator=(const AcmRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AcmRequest &other) const;


protected:
    /// @cond internal
    explicit AcmRequest(AcmRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcmRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
