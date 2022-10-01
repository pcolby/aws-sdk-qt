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
