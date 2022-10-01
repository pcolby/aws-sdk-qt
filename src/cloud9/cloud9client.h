// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUD9CLIENT_H
#define QTAWS_CLOUD9CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscloud9global.h"

class QNetworkReply;

namespace QtAws {
namespace Cloud9 {

class Cloud9ClientPrivate;
class CreateEnvironmentEC2Request;
class CreateEnvironmentEC2Response;
class CreateEnvironmentMembershipRequest;
class CreateEnvironmentMembershipResponse;
class DeleteEnvironmentRequest;
class DeleteEnvironmentResponse;
class DeleteEnvironmentMembershipRequest;
class DeleteEnvironmentMembershipResponse;
class DescribeEnvironmentMembershipsRequest;
class DescribeEnvironmentMembershipsResponse;
class DescribeEnvironmentStatusRequest;
class DescribeEnvironmentStatusResponse;
class DescribeEnvironmentsRequest;
class DescribeEnvironmentsResponse;
class ListEnvironmentsRequest;
class ListEnvironmentsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateEnvironmentRequest;
class UpdateEnvironmentResponse;
class UpdateEnvironmentMembershipRequest;
class UpdateEnvironmentMembershipResponse;

class QTAWSCLOUD9_EXPORT Cloud9Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Cloud9Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit Cloud9Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateEnvironmentEC2Response * createEnvironmentEC2(const CreateEnvironmentEC2Request &request);
    CreateEnvironmentMembershipResponse * createEnvironmentMembership(const CreateEnvironmentMembershipRequest &request);
    DeleteEnvironmentResponse * deleteEnvironment(const DeleteEnvironmentRequest &request);
    DeleteEnvironmentMembershipResponse * deleteEnvironmentMembership(const DeleteEnvironmentMembershipRequest &request);
    DescribeEnvironmentMembershipsResponse * describeEnvironmentMemberships(const DescribeEnvironmentMembershipsRequest &request);
    DescribeEnvironmentStatusResponse * describeEnvironmentStatus(const DescribeEnvironmentStatusRequest &request);
    DescribeEnvironmentsResponse * describeEnvironments(const DescribeEnvironmentsRequest &request);
    ListEnvironmentsResponse * listEnvironments(const ListEnvironmentsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateEnvironmentResponse * updateEnvironment(const UpdateEnvironmentRequest &request);
    UpdateEnvironmentMembershipResponse * updateEnvironmentMembership(const UpdateEnvironmentMembershipRequest &request);

private:
    Q_DECLARE_PRIVATE(Cloud9Client)
    Q_DISABLE_COPY(Cloud9Client)

};

} // namespace Cloud9
} // namespace QtAws

#endif
