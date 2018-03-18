/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MEDIASTOREDATACLIENT_H
#define QTAWS_MEDIASTOREDATACLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace MediaStoreData {

class MediaStoreDataClientPrivate;

class QTAWS_EXPORT MediaStoreDataClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MediaStoreDataClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaStoreDataClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
