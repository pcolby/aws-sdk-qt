// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNERREQUEST_H
#define QTAWS_SIGNERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssignerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Signer {

class SignerRequestPrivate;

class QTAWSSIGNER_EXPORT SignerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Signer.
    enum Action {
        AddProfilePermissionAction,
        CancelSigningProfileAction,
        DescribeSigningJobAction,
        GetSigningPlatformAction,
        GetSigningProfileAction,
        ListProfilePermissionsAction,
        ListSigningJobsAction,
        ListSigningPlatformsAction,
        ListSigningProfilesAction,
        ListTagsForResourceAction,
        PutSigningProfileAction,
        RemoveProfilePermissionAction,
        RevokeSignatureAction,
        RevokeSigningProfileAction,
        StartSigningJobAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SignerRequest(const Action action);
    SignerRequest(const SignerRequest &other);
    SignerRequest &operator=(const SignerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SignerRequest &other) const;


protected:
    /// @cond internal
    explicit SignerRequest(SignerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignerRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
