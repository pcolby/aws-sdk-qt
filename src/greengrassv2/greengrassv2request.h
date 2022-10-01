// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GREENGRASSV2REQUEST_H
#define QTAWS_GREENGRASSV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsgreengrassv2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace GreengrassV2 {

class GreengrassV2RequestPrivate;

class QTAWSGREENGRASSV2_EXPORT GreengrassV2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by GreengrassV2.
    enum Action {
        AssociateServiceRoleToAccountAction,
        BatchAssociateClientDeviceWithCoreDeviceAction,
        BatchDisassociateClientDeviceFromCoreDeviceAction,
        CancelDeploymentAction,
        CreateComponentVersionAction,
        CreateDeploymentAction,
        DeleteComponentAction,
        DeleteCoreDeviceAction,
        DeleteDeploymentAction,
        DescribeComponentAction,
        DisassociateServiceRoleFromAccountAction,
        GetComponentAction,
        GetComponentVersionArtifactAction,
        GetConnectivityInfoAction,
        GetCoreDeviceAction,
        GetDeploymentAction,
        GetServiceRoleForAccountAction,
        ListClientDevicesAssociatedWithCoreDeviceAction,
        ListComponentVersionsAction,
        ListComponentsAction,
        ListCoreDevicesAction,
        ListDeploymentsAction,
        ListEffectiveDeploymentsAction,
        ListInstalledComponentsAction,
        ListTagsForResourceAction,
        ResolveComponentCandidatesAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateConnectivityInfoAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GreengrassV2Request(const Action action);
    GreengrassV2Request(const GreengrassV2Request &other);
    GreengrassV2Request &operator=(const GreengrassV2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GreengrassV2Request &other) const;


protected:
    /// @cond internal
    explicit GreengrassV2Request(GreengrassV2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GreengrassV2Request)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
