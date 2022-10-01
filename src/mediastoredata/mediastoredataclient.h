// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTOREDATACLIENT_H
#define QTAWS_MEDIASTOREDATACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmediastoredataglobal.h"

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

class QTAWSMEDIASTOREDATA_EXPORT MediaStoreDataClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaStoreDataClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MediaStoreDataClient(
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
