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

#ifndef QTAWS_ELASTICLOADBALANCINGCLIENT_H
#define QTAWS_ELASTICLOADBALANCINGCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace ElasticLoadBalancing {

class ElasticLoadBalancingClientPrivate;
class AddTagsResponse;
class ApplySecurityGroupsToLoadBalancerResponse;
class AttachLoadBalancerToSubnetsResponse;
class ConfigureHealthCheckResponse;
class CreateAppCookieStickinessPolicyResponse;
class CreateLBCookieStickinessPolicyResponse;
class CreateLoadBalancerResponse;
class CreateLoadBalancerListenersResponse;
class CreateLoadBalancerPolicyResponse;
class DeleteLoadBalancerResponse;
class DeleteLoadBalancerListenersResponse;
class DeleteLoadBalancerPolicyResponse;
class DeregisterInstancesFromLoadBalancerResponse;
class DescribeAccountLimitsResponse;
class DescribeInstanceHealthResponse;
class DescribeLoadBalancerAttributesResponse;
class DescribeLoadBalancerPoliciesResponse;
class DescribeLoadBalancerPolicyTypesResponse;
class DescribeLoadBalancersResponse;
class DescribeTagsResponse;
class DetachLoadBalancerFromSubnetsResponse;
class DisableAvailabilityZonesForLoadBalancerResponse;
class EnableAvailabilityZonesForLoadBalancerResponse;
class ModifyLoadBalancerAttributesResponse;
class RegisterInstancesWithLoadBalancerResponse;
class RemoveTagsResponse;
class SetLoadBalancerListenerSSLCertificateResponse;
class SetLoadBalancerPoliciesForBackendServerResponse;
class SetLoadBalancerPoliciesOfListenerResponse;

class QTAWS_EXPORT ElasticLoadBalancingClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ElasticLoadBalancingClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ElasticLoadBalancingClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsResponse * addTags(const AddTagsRequest &request);
    ApplySecurityGroupsToLoadBalancerResponse * applySecurityGroupsToLoadBalancer(const ApplySecurityGroupsToLoadBalancerRequest &request);
    AttachLoadBalancerToSubnetsResponse * attachLoadBalancerToSubnets(const AttachLoadBalancerToSubnetsRequest &request);
    ConfigureHealthCheckResponse * configureHealthCheck(const ConfigureHealthCheckRequest &request);
    CreateAppCookieStickinessPolicyResponse * createAppCookieStickinessPolicy(const CreateAppCookieStickinessPolicyRequest &request);
    CreateLBCookieStickinessPolicyResponse * createLBCookieStickinessPolicy(const CreateLBCookieStickinessPolicyRequest &request);
    CreateLoadBalancerResponse * createLoadBalancer(const CreateLoadBalancerRequest &request);
    CreateLoadBalancerListenersResponse * createLoadBalancerListeners(const CreateLoadBalancerListenersRequest &request);
    CreateLoadBalancerPolicyResponse * createLoadBalancerPolicy(const CreateLoadBalancerPolicyRequest &request);
    DeleteLoadBalancerResponse * deleteLoadBalancer(const DeleteLoadBalancerRequest &request);
    DeleteLoadBalancerListenersResponse * deleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest &request);
    DeleteLoadBalancerPolicyResponse * deleteLoadBalancerPolicy(const DeleteLoadBalancerPolicyRequest &request);
    DeregisterInstancesFromLoadBalancerResponse * deregisterInstancesFromLoadBalancer(const DeregisterInstancesFromLoadBalancerRequest &request);
    DescribeAccountLimitsResponse * describeAccountLimits(const DescribeAccountLimitsRequest &request);
    DescribeInstanceHealthResponse * describeInstanceHealth(const DescribeInstanceHealthRequest &request);
    DescribeLoadBalancerAttributesResponse * describeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest &request);
    DescribeLoadBalancerPoliciesResponse * describeLoadBalancerPolicies(const DescribeLoadBalancerPoliciesRequest &request);
    DescribeLoadBalancerPolicyTypesResponse * describeLoadBalancerPolicyTypes(const DescribeLoadBalancerPolicyTypesRequest &request);
    DescribeLoadBalancersResponse * describeLoadBalancers(const DescribeLoadBalancersRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DetachLoadBalancerFromSubnetsResponse * detachLoadBalancerFromSubnets(const DetachLoadBalancerFromSubnetsRequest &request);
    DisableAvailabilityZonesForLoadBalancerResponse * disableAvailabilityZonesForLoadBalancer(const DisableAvailabilityZonesForLoadBalancerRequest &request);
    EnableAvailabilityZonesForLoadBalancerResponse * enableAvailabilityZonesForLoadBalancer(const EnableAvailabilityZonesForLoadBalancerRequest &request);
    ModifyLoadBalancerAttributesResponse * modifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request);
    RegisterInstancesWithLoadBalancerResponse * registerInstancesWithLoadBalancer(const RegisterInstancesWithLoadBalancerRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    SetLoadBalancerListenerSSLCertificateResponse * setLoadBalancerListenerSSLCertificate(const SetLoadBalancerListenerSSLCertificateRequest &request);
    SetLoadBalancerPoliciesForBackendServerResponse * setLoadBalancerPoliciesForBackendServer(const SetLoadBalancerPoliciesForBackendServerRequest &request);
    SetLoadBalancerPoliciesOfListenerResponse * setLoadBalancerPoliciesOfListener(const SetLoadBalancerPoliciesOfListenerRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingClient)
    Q_DISABLE_COPY(ElasticLoadBalancingClient)

};

} // namespace ElasticLoadBalancing
} // namespace AWS

#endif
