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

protected:
    /// @cond internal
    Cloud9ClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit Cloud9Client(Cloud9ClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(Cloud9Client)
    Q_DISABLE_COPY(Cloud9Client)

};

} // namespace Cloud9
} // namespace QtAws

#endif
