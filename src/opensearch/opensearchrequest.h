// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENSEARCHREQUEST_H
#define QTAWS_OPENSEARCHREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsopensearchglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace OpenSearch {

class OpenSearchRequestPrivate;

class QTAWSOPENSEARCH_EXPORT OpenSearchRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by OpenSearch.
    enum Action {
        AcceptInboundConnectionAction,
        AddTagsAction,
        AssociatePackageAction,
        CancelServiceSoftwareUpdateAction,
        CreateDomainAction,
        CreateOutboundConnectionAction,
        CreatePackageAction,
        DeleteDomainAction,
        DeleteInboundConnectionAction,
        DeleteOutboundConnectionAction,
        DeletePackageAction,
        DescribeDomainAction,
        DescribeDomainAutoTunesAction,
        DescribeDomainChangeProgressAction,
        DescribeDomainConfigAction,
        DescribeDomainsAction,
        DescribeInboundConnectionsAction,
        DescribeInstanceTypeLimitsAction,
        DescribeOutboundConnectionsAction,
        DescribePackagesAction,
        DescribeReservedInstanceOfferingsAction,
        DescribeReservedInstancesAction,
        DissociatePackageAction,
        GetCompatibleVersionsAction,
        GetPackageVersionHistoryAction,
        GetUpgradeHistoryAction,
        GetUpgradeStatusAction,
        ListDomainNamesAction,
        ListDomainsForPackageAction,
        ListInstanceTypeDetailsAction,
        ListPackagesForDomainAction,
        ListTagsAction,
        ListVersionsAction,
        PurchaseReservedInstanceOfferingAction,
        RejectInboundConnectionAction,
        RemoveTagsAction,
        StartServiceSoftwareUpdateAction,
        UpdateDomainConfigAction,
        UpdatePackageAction,
        UpgradeDomainAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    OpenSearchRequest(const Action action);
    OpenSearchRequest(const OpenSearchRequest &other);
    OpenSearchRequest &operator=(const OpenSearchRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const OpenSearchRequest &other) const;


protected:
    /// @cond internal
    explicit OpenSearchRequest(OpenSearchRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OpenSearchRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
