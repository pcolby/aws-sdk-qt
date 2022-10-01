// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
        AssociateTimeSeriesToAssetPropertyAction,
        BatchAssociateProjectAssetsAction,
        BatchDisassociateProjectAssetsAction,
        BatchGetAssetPropertyAggregatesAction,
        BatchGetAssetPropertyValueAction,
        BatchGetAssetPropertyValueHistoryAction,
        BatchPutAssetPropertyValueAction,
        CreateAccessPolicyAction,
        CreateAssetAction,
        CreateAssetModelAction,
        CreateBulkImportJobAction,
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
        DeleteTimeSeriesAction,
        DescribeAccessPolicyAction,
        DescribeAssetAction,
        DescribeAssetModelAction,
        DescribeAssetPropertyAction,
        DescribeBulkImportJobAction,
        DescribeDashboardAction,
        DescribeDefaultEncryptionConfigurationAction,
        DescribeGatewayAction,
        DescribeGatewayCapabilityConfigurationAction,
        DescribeLoggingOptionsAction,
        DescribePortalAction,
        DescribeProjectAction,
        DescribeStorageConfigurationAction,
        DescribeTimeSeriesAction,
        DisassociateAssetsAction,
        DisassociateTimeSeriesFromAssetPropertyAction,
        GetAssetPropertyAggregatesAction,
        GetAssetPropertyValueAction,
        GetAssetPropertyValueHistoryAction,
        GetInterpolatedAssetPropertyValuesAction,
        ListAccessPoliciesAction,
        ListAssetModelsAction,
        ListAssetRelationshipsAction,
        ListAssetsAction,
        ListAssociatedAssetsAction,
        ListBulkImportJobsAction,
        ListDashboardsAction,
        ListGatewaysAction,
        ListPortalsAction,
        ListProjectAssetsAction,
        ListProjectsAction,
        ListTagsForResourceAction,
        ListTimeSeriesAction,
        PutDefaultEncryptionConfigurationAction,
        PutLoggingOptionsAction,
        PutStorageConfigurationAction,
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
