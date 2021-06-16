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

#ifndef QTAWS_MARKETPLACECATALOGCLIENT_H
#define QTAWS_MARKETPLACECATALOGCLIENT_H

#include "core/awsabstractclient.h"

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

class QTAWS_EXPORT MarketplaceCatalogClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MarketplaceCatalogClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MarketplaceCatalogClient(
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
