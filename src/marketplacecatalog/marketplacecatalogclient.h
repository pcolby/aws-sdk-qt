// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECATALOGCLIENT_H
#define QTAWS_MARKETPLACECATALOGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmarketplacecatalogglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MarketplaceCatalog {

class MarketplaceCatalogClientPrivate;
class CancelChangeSetRequest;
class CancelChangeSetResponse;
class DescribeChangeSetRequest;
class DescribeChangeSetResponse;
class DescribeEntityRequest;
class DescribeEntityResponse;
class ListChangeSetsRequest;
class ListChangeSetsResponse;
class ListEntitiesRequest;
class ListEntitiesResponse;
class StartChangeSetRequest;
class StartChangeSetResponse;

class QTAWSMARKETPLACECATALOG_EXPORT MarketplaceCatalogClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MarketplaceCatalogClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MarketplaceCatalogClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelChangeSetResponse * cancelChangeSet(const CancelChangeSetRequest &request);
    DescribeChangeSetResponse * describeChangeSet(const DescribeChangeSetRequest &request);
    DescribeEntityResponse * describeEntity(const DescribeEntityRequest &request);
    ListChangeSetsResponse * listChangeSets(const ListChangeSetsRequest &request);
    ListEntitiesResponse * listEntities(const ListEntitiesRequest &request);
    StartChangeSetResponse * startChangeSet(const StartChangeSetRequest &request);

private:
    Q_DECLARE_PRIVATE(MarketplaceCatalogClient)
    Q_DISABLE_COPY(MarketplaceCatalogClient)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
