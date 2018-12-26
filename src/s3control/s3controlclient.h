/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_S3CONTROLCLIENT_H
#define QTAWS_S3CONTROLCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace S3Control {

class S3ControlClientPrivate;
class DeletePublicAccessBlockRequest;
class DeletePublicAccessBlockResponse;
class GetPublicAccessBlockRequest;
class GetPublicAccessBlockResponse;
class PutPublicAccessBlockRequest;
class PutPublicAccessBlockResponse;

class QTAWS_EXPORT S3ControlClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    S3ControlClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    S3ControlClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeletePublicAccessBlockResponse * deletePublicAccessBlock(const DeletePublicAccessBlockRequest &request);
    GetPublicAccessBlockResponse * getPublicAccessBlock(const GetPublicAccessBlockRequest &request);
    PutPublicAccessBlockResponse * putPublicAccessBlock(const PutPublicAccessBlockRequest &request);

private:
    Q_DECLARE_PRIVATE(S3ControlClient)
    Q_DISABLE_COPY(S3ControlClient)

};

} // namespace S3Control
} // namespace QtAws

#endif
