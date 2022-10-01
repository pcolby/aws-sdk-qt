// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KMSREQUEST_H
#define QTAWS_KMSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskmsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Kms {

class KmsRequestPrivate;

class QTAWSKMS_EXPORT KmsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Kms.
    enum Action {
        CancelKeyDeletionAction,
        ConnectCustomKeyStoreAction,
        CreateAliasAction,
        CreateCustomKeyStoreAction,
        CreateGrantAction,
        CreateKeyAction,
        DecryptAction,
        DeleteAliasAction,
        DeleteCustomKeyStoreAction,
        DeleteImportedKeyMaterialAction,
        DescribeCustomKeyStoresAction,
        DescribeKeyAction,
        DisableKeyAction,
        DisableKeyRotationAction,
        DisconnectCustomKeyStoreAction,
        EnableKeyAction,
        EnableKeyRotationAction,
        EncryptAction,
        GenerateDataKeyAction,
        GenerateDataKeyPairAction,
        GenerateDataKeyPairWithoutPlaintextAction,
        GenerateDataKeyWithoutPlaintextAction,
        GenerateMacAction,
        GenerateRandomAction,
        GetKeyPolicyAction,
        GetKeyRotationStatusAction,
        GetParametersForImportAction,
        GetPublicKeyAction,
        ImportKeyMaterialAction,
        ListAliasesAction,
        ListGrantsAction,
        ListKeyPoliciesAction,
        ListKeysAction,
        ListResourceTagsAction,
        ListRetirableGrantsAction,
        PutKeyPolicyAction,
        ReEncryptAction,
        ReplicateKeyAction,
        RetireGrantAction,
        RevokeGrantAction,
        ScheduleKeyDeletionAction,
        SignAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAliasAction,
        UpdateCustomKeyStoreAction,
        UpdateKeyDescriptionAction,
        UpdatePrimaryRegionAction,
        VerifyAction,
        VerifyMacAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KmsRequest(const Action action);
    KmsRequest(const KmsRequest &other);
    KmsRequest &operator=(const KmsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KmsRequest &other) const;


protected:
    /// @cond internal
    explicit KmsRequest(KmsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KmsRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
