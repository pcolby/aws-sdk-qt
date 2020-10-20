/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_MEDIACONNECTCLIENT_H
#define QTAWS_MEDIACONNECTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace MediaConnect {

class MediaConnectClientPrivate;
class AddFlowOutputsRequest;
class AddFlowOutputsResponse;
class CreateFlowRequest;
class CreateFlowResponse;
class DeleteFlowRequest;
class DeleteFlowResponse;
class DescribeFlowRequest;
class DescribeFlowResponse;
class GrantFlowEntitlementsRequest;
class GrantFlowEntitlementsResponse;
class ListEntitlementsRequest;
class ListEntitlementsResponse;
class ListFlowsRequest;
class ListFlowsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RemoveFlowOutputRequest;
class RemoveFlowOutputResponse;
class RevokeFlowEntitlementRequest;
class RevokeFlowEntitlementResponse;
class StartFlowRequest;
class StartFlowResponse;
class StopFlowRequest;
class StopFlowResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateFlowEntitlementRequest;
class UpdateFlowEntitlementResponse;
class UpdateFlowOutputRequest;
class UpdateFlowOutputResponse;
class UpdateFlowSourceRequest;
class UpdateFlowSourceResponse;

class QTAWS_EXPORT MediaConnectClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaConnectClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaConnectClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddFlowOutputsResponse * addFlowOutputs(const AddFlowOutputsRequest &request);
    CreateFlowResponse * createFlow(const CreateFlowRequest &request);
    DeleteFlowResponse * deleteFlow(const DeleteFlowRequest &request);
    DescribeFlowResponse * describeFlow(const DescribeFlowRequest &request);
    GrantFlowEntitlementsResponse * grantFlowEntitlements(const GrantFlowEntitlementsRequest &request);
    ListEntitlementsResponse * listEntitlements(const ListEntitlementsRequest &request);
    ListFlowsResponse * listFlows(const ListFlowsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RemoveFlowOutputResponse * removeFlowOutput(const RemoveFlowOutputRequest &request);
    RevokeFlowEntitlementResponse * revokeFlowEntitlement(const RevokeFlowEntitlementRequest &request);
    StartFlowResponse * startFlow(const StartFlowRequest &request);
    StopFlowResponse * stopFlow(const StopFlowRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateFlowEntitlementResponse * updateFlowEntitlement(const UpdateFlowEntitlementRequest &request);
    UpdateFlowOutputResponse * updateFlowOutput(const UpdateFlowOutputRequest &request);
    UpdateFlowSourceResponse * updateFlowSource(const UpdateFlowSourceRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaConnectClient)
    Q_DISABLE_COPY(MediaConnectClient)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
