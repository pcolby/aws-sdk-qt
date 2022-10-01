// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLACIERREQUEST_H
#define QTAWS_GLACIERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsglacierglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Glacier {

class GlacierRequestPrivate;

class QTAWSGLACIER_EXPORT GlacierRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Glacier.
    enum Action {
        AbortMultipartUploadAction,
        AbortVaultLockAction,
        AddTagsToVaultAction,
        CompleteMultipartUploadAction,
        CompleteVaultLockAction,
        CreateVaultAction,
        DeleteArchiveAction,
        DeleteVaultAction,
        DeleteVaultAccessPolicyAction,
        DeleteVaultNotificationsAction,
        DescribeJobAction,
        DescribeVaultAction,
        GetDataRetrievalPolicyAction,
        GetJobOutputAction,
        GetVaultAccessPolicyAction,
        GetVaultLockAction,
        GetVaultNotificationsAction,
        InitiateJobAction,
        InitiateMultipartUploadAction,
        InitiateVaultLockAction,
        ListJobsAction,
        ListMultipartUploadsAction,
        ListPartsAction,
        ListProvisionedCapacityAction,
        ListTagsForVaultAction,
        ListVaultsAction,
        PurchaseProvisionedCapacityAction,
        RemoveTagsFromVaultAction,
        SetDataRetrievalPolicyAction,
        SetVaultAccessPolicyAction,
        SetVaultNotificationsAction,
        UploadArchiveAction,
        UploadMultipartPartAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GlacierRequest(const Action action);
    GlacierRequest(const GlacierRequest &other);
    GlacierRequest &operator=(const GlacierRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GlacierRequest &other) const;


protected:
    /// @cond internal
    explicit GlacierRequest(GlacierRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GlacierRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
