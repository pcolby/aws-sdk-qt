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

#ifndef QTAWS_KMSREQUEST_H
#define QTAWS_KMSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace KMS {

class KmsRequestPrivate;

class QTAWS_EXPORT KmsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by KMS.
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
        GenerateDataKeyWithoutPlaintextAction,
        GenerateRandomAction,
        GetKeyPolicyAction,
        GetKeyRotationStatusAction,
        GetParametersForImportAction,
        ImportKeyMaterialAction,
        ListAliasesAction,
        ListGrantsAction,
        ListKeyPoliciesAction,
        ListKeysAction,
        ListResourceTagsAction,
        ListRetirableGrantsAction,
        PutKeyPolicyAction,
        ReEncryptAction,
        RetireGrantAction,
        RevokeGrantAction,
        ScheduleKeyDeletionAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAliasAction,
        UpdateCustomKeyStoreAction,
        UpdateKeyDescriptionAction,
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
    KmsRequest(KmsRequestPrivate * const d);
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

} // namespace KMS
} // namespace QtAws

#endif
