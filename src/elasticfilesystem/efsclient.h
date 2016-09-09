/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_EFSCLIENT_H
#define QTAWS_EFSCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class EfsClientPrivate;

class QTAWS_EXPORT EfsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    EfsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EfsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    EfsCreateFileSystemResponse * createFileSystem(const EfsCreateFileSystemRequest &request);
    EfsCreateMountTargetResponse * createMountTarget(const EfsCreateMountTargetRequest &request);
    EfsCreateTagsResponse * createTags(const EfsCreateTagsRequest &request);
    EfsDeleteFileSystemResponse * deleteFileSystem(const EfsDeleteFileSystemRequest &request);
    EfsDeleteMountTargetResponse * deleteMountTarget(const EfsDeleteMountTargetRequest &request);
    EfsDeleteTagsResponse * deleteTags(const EfsDeleteTagsRequest &request);
    EfsDescribeFileSystemsResponse * describeFileSystems(const EfsDescribeFileSystemsRequest &request);
    EfsDescribeMountTargetSecurityGroupsResponse * describeMountTargetSecurityGroups(const EfsDescribeMountTargetSecurityGroupsRequest &request);
    EfsDescribeMountTargetsResponse * describeMountTargets(const EfsDescribeMountTargetsRequest &request);
    EfsDescribeTagsResponse * describeTags(const EfsDescribeTagsRequest &request);
    EfsModifyMountTargetSecurityGroupsResponse * modifyMountTargetSecurityGroups(const EfsModifyMountTargetSecurityGroupsRequest &request);

private:
    Q_DECLARE_PRIVATE(EfsClient)
    Q_DISABLE_COPY(EfsClient)

};

QTAWS_END_NAMESPACE

#endif
