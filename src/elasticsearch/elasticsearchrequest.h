// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICSEARCHREQUEST_H
#define QTAWS_ELASTICSEARCHREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawselasticsearchglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Elasticsearch {

class ElasticsearchRequestPrivate;

class QTAWSELASTICSEARCH_EXPORT ElasticsearchRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Elasticsearch.
    enum Action {
        AcceptInboundCrossClusterSearchConnectionAction,
        AddTagsAction,
        AssociatePackageAction,
        CancelElasticsearchServiceSoftwareUpdateAction,
        CreateElasticsearchDomainAction,
        CreateOutboundCrossClusterSearchConnectionAction,
        CreatePackageAction,
        DeleteElasticsearchDomainAction,
        DeleteElasticsearchServiceRoleAction,
        DeleteInboundCrossClusterSearchConnectionAction,
        DeleteOutboundCrossClusterSearchConnectionAction,
        DeletePackageAction,
        DescribeDomainAutoTunesAction,
        DescribeDomainChangeProgressAction,
        DescribeElasticsearchDomainAction,
        DescribeElasticsearchDomainConfigAction,
        DescribeElasticsearchDomainsAction,
        DescribeElasticsearchInstanceTypeLimitsAction,
        DescribeInboundCrossClusterSearchConnectionsAction,
        DescribeOutboundCrossClusterSearchConnectionsAction,
        DescribePackagesAction,
        DescribeReservedElasticsearchInstanceOfferingsAction,
        DescribeReservedElasticsearchInstancesAction,
        DissociatePackageAction,
        GetCompatibleElasticsearchVersionsAction,
        GetPackageVersionHistoryAction,
        GetUpgradeHistoryAction,
        GetUpgradeStatusAction,
        ListDomainNamesAction,
        ListDomainsForPackageAction,
        ListElasticsearchInstanceTypesAction,
        ListElasticsearchVersionsAction,
        ListPackagesForDomainAction,
        ListTagsAction,
        PurchaseReservedElasticsearchInstanceOfferingAction,
        RejectInboundCrossClusterSearchConnectionAction,
        RemoveTagsAction,
        StartElasticsearchServiceSoftwareUpdateAction,
        UpdateElasticsearchDomainConfigAction,
        UpdatePackageAction,
        UpgradeElasticsearchDomainAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ElasticsearchRequest(const Action action);
    ElasticsearchRequest(const ElasticsearchRequest &other);
    ElasticsearchRequest &operator=(const ElasticsearchRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ElasticsearchRequest &other) const;


protected:
    /// @cond internal
    explicit ElasticsearchRequest(ElasticsearchRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticsearchRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
