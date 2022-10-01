// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EKSREQUEST_H
#define QTAWS_EKSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawseksglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Eks {

class EksRequestPrivate;

class QTAWSEKS_EXPORT EksRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Eks.
    enum Action {
        AssociateEncryptionConfigAction,
        AssociateIdentityProviderConfigAction,
        CreateAddonAction,
        CreateClusterAction,
        CreateFargateProfileAction,
        CreateNodegroupAction,
        DeleteAddonAction,
        DeleteClusterAction,
        DeleteFargateProfileAction,
        DeleteNodegroupAction,
        DeregisterClusterAction,
        DescribeAddonAction,
        DescribeAddonVersionsAction,
        DescribeClusterAction,
        DescribeFargateProfileAction,
        DescribeIdentityProviderConfigAction,
        DescribeNodegroupAction,
        DescribeUpdateAction,
        DisassociateIdentityProviderConfigAction,
        ListAddonsAction,
        ListClustersAction,
        ListFargateProfilesAction,
        ListIdentityProviderConfigsAction,
        ListNodegroupsAction,
        ListTagsForResourceAction,
        ListUpdatesAction,
        RegisterClusterAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAddonAction,
        UpdateClusterConfigAction,
        UpdateClusterVersionAction,
        UpdateNodegroupConfigAction,
        UpdateNodegroupVersionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EksRequest(const Action action);
    EksRequest(const EksRequest &other);
    EksRequest &operator=(const EksRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EksRequest &other) const;


protected:
    /// @cond internal
    explicit EksRequest(EksRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EksRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
