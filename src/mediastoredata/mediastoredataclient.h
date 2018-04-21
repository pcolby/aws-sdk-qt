/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MEDIASTOREDATACLIENT_H
#define QTAWS_MEDIASTOREDATACLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace MediaStoreData {

class MediaStoreDataClientPrivate;
class DeleteObjectRequest;
class DeleteObjectResponse;
class DescribeObjectRequest;
class DescribeObjectResponse;
class GetObjectRequest;
class GetObjectResponse;
class ListItemsRequest;
class ListItemsResponse;
class PutObjectRequest;
class PutObjectResponse;

class QTAWS_EXPORT MediaStoreDataClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaStoreDataClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaStoreDataClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteObjectResponse * deleteObject(const DeleteObjectRequest &request);
    DescribeObjectResponse * describeObject(const DescribeObjectRequest &request);
    GetObjectResponse * getObject(const GetObjectRequest &request);
    ListItemsResponse * listItems(const ListItemsRequest &request);
    PutObjectResponse * putObject(const PutObjectRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaStoreDataClient)
    Q_DISABLE_COPY(MediaStoreDataClient)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
