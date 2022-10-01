// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PANORAMAREQUEST_H
#define QTAWS_PANORAMAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspanoramaglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Panorama {

class PanoramaRequestPrivate;

class QTAWSPANORAMA_EXPORT PanoramaRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Panorama.
    enum Action {
        CreateApplicationInstanceAction,
        CreateJobForDevicesAction,
        CreateNodeFromTemplateJobAction,
        CreatePackageAction,
        CreatePackageImportJobAction,
        DeleteDeviceAction,
        DeletePackageAction,
        DeregisterPackageVersionAction,
        DescribeApplicationInstanceAction,
        DescribeApplicationInstanceDetailsAction,
        DescribeDeviceAction,
        DescribeDeviceJobAction,
        DescribeNodeAction,
        DescribeNodeFromTemplateJobAction,
        DescribePackageAction,
        DescribePackageImportJobAction,
        DescribePackageVersionAction,
        ListApplicationInstanceDependenciesAction,
        ListApplicationInstanceNodeInstancesAction,
        ListApplicationInstancesAction,
        ListDevicesAction,
        ListDevicesJobsAction,
        ListNodeFromTemplateJobsAction,
        ListNodesAction,
        ListPackageImportJobsAction,
        ListPackagesAction,
        ListTagsForResourceAction,
        ProvisionDeviceAction,
        RegisterPackageVersionAction,
        RemoveApplicationInstanceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDeviceMetadataAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PanoramaRequest(const Action action);
    PanoramaRequest(const PanoramaRequest &other);
    PanoramaRequest &operator=(const PanoramaRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PanoramaRequest &other) const;


protected:
    /// @cond internal
    explicit PanoramaRequest(PanoramaRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PanoramaRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
