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

#ifndef QTAWS_IOTSITEWISEREQUEST_H
#define QTAWS_IOTSITEWISEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiotsitewiseglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTSiteWise {

class IoTSiteWiseRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT IoTSiteWiseRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTSiteWise.
    enum Action {
        AssociateAssetsAction,
        BatchAssociateProjectAssetsAction,
        BatchDisassociateProjectAssetsAction,
        BatchPutAssetPropertyValueAction,
        CreateAccessPolicyAction,
        CreateAssetAction,
        CreateAssetModelAction,
        CreateDashboardAction,
        CreateGatewayAction,
        CreatePortalAction,
        CreateProjectAction,
        DeleteAccessPolicyAction,
        DeleteAssetAction,
        DeleteAssetModelAction,
        DeleteDashboardAction,
        DeleteGatewayAction,
        DeletePortalAction,
        DeleteProjectAction,
        DescribeAccessPolicyAction,
        DescribeAssetAction,
        DescribeAssetModelAction,
        DescribeAssetPropertyAction,
        DescribeDashboardAction,
        DescribeDefaultEncryptionConfigurationAction,
        DescribeGatewayAction,
        DescribeGatewayCapabilityConfigurationAction,
        DescribeLoggingOptionsAction,
        DescribePortalAction,
        DescribeProjectAction,
        DisassociateAssetsAction,
        GetAssetPropertyAggregatesAction,
        GetAssetPropertyValueAction,
        GetAssetPropertyValueHistoryAction,
        GetInterpolatedAssetPropertyValuesAction,
        ListAccessPoliciesAction,
        ListAssetModelsAction,
        ListAssetRelationshipsAction,
        ListAssetsAction,
        ListAssociatedAssetsAction,
        ListDashboardsAction,
        ListGatewaysAction,
        ListPortalsAction,
        ListProjectAssetsAction,
        ListProjectsAction,
        ListTagsForResourceAction,
        PutDefaultEncryptionConfigurationAction,
        PutLoggingOptionsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAccessPolicyAction,
        UpdateAssetAction,
        UpdateAssetModelAction,
        UpdateAssetPropertyAction,
        UpdateDashboardAction,
        UpdateGatewayAction,
        UpdateGatewayCapabilityConfigurationAction,
        UpdatePortalAction,
        UpdateProjectAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTSiteWiseRequest(const Action action);
    IoTSiteWiseRequest(const IoTSiteWiseRequest &other);
    IoTSiteWiseRequest &operator=(const IoTSiteWiseRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTSiteWiseRequest &other) const;


protected:
    /// @cond internal
    IoTSiteWiseRequestPrivate * const d_ptr; ///< Internal d-pointer.
    explicit IoTSiteWiseRequest(IoTSiteWiseRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTSiteWiseRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
