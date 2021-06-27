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

#ifndef QTAWS_ELASTICLOADBALANCINGCLIENT_H
#define QTAWS_ELASTICLOADBALANCINGCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ElasticLoadBalancing {

class ElasticLoadBalancingClientPrivate;
class AddTagsRequest;
class AddTagsResponse;
class ApplySecurityGroupsToLoadBalancerRequest;
class ApplySecurityGroupsToLoadBalancerResponse;
class AttachLoadBalancerToSubnetsRequest;
class AttachLoadBalancerToSubnetsResponse;
class ConfigureHealthCheckRequest;
class ConfigureHealthCheckResponse;
class CreateAppCookieStickinessPolicyRequest;
class CreateAppCookieStickinessPolicyResponse;
class CreateLBCookieStickinessPolicyRequest;
class CreateLBCookieStickinessPolicyResponse;
class CreateLoadBalancerRequest;
class CreateLoadBalancerResponse;
class CreateLoadBalancerListenersRequest;
class CreateLoadBalancerListenersResponse;
class CreateLoadBalancerPolicyRequest;
class CreateLoadBalancerPolicyResponse;
class DeleteLoadBalancerRequest;
class DeleteLoadBalancerResponse;
class DeleteLoadBalancerListenersRequest;
class DeleteLoadBalancerListenersResponse;
class DeleteLoadBalancerPolicyRequest;
class DeleteLoadBalancerPolicyResponse;
class DeregisterInstancesFromLoadBalancerRequest;
class DeregisterInstancesFromLoadBalancerResponse;
class DescribeAccountLimitsRequest;
class DescribeAccountLimitsResponse;
class DescribeInstanceHealthRequest;
class DescribeInstanceHealthResponse;
class DescribeLoadBalancerAttributesRequest;
class DescribeLoadBalancerAttributesResponse;
class DescribeLoadBalancerPoliciesRequest;
class DescribeLoadBalancerPoliciesResponse;
class DescribeLoadBalancerPolicyTypesRequest;
class DescribeLoadBalancerPolicyTypesResponse;
class DescribeLoadBalancersRequest;
class DescribeLoadBalancersResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DetachLoadBalancerFromSubnetsRequest;
class DetachLoadBalancerFromSubnetsResponse;
class DisableAvailabilityZonesForLoadBalancerRequest;
class DisableAvailabilityZonesForLoadBalancerResponse;
class EnableAvailabilityZonesForLoadBalancerRequest;
class EnableAvailabilityZonesForLoadBalancerResponse;
class ModifyLoadBalancerAttributesRequest;
class ModifyLoadBalancerAttributesResponse;
class RegisterInstancesWithLoadBalancerRequest;
class RegisterInstancesWithLoadBalancerResponse;
class RemoveTagsRequest;
class RemoveTagsResponse;
class SetLoadBalancerListenerSSLCertificateRequest;
class SetLoadBalancerListenerSSLCertificateResponse;
class SetLoadBalancerPoliciesForBackendServerRequest;
class SetLoadBalancerPoliciesForBackendServerResponse;
class SetLoadBalancerPoliciesOfListenerRequest;
class SetLoadBalancerPoliciesOfListenerResponse;

class QTAWS_EXPORT ElasticLoadBalancingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ElasticLoadBalancingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ElasticLoadBalancingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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

protected:
    /// @cond internal
    ElasticLoadBalancingClientPrivate * const d_ptr; ///< Internal d-pointer.
    ElasticLoadBalancingClient(ElasticLoadBalancingClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingClient)
    Q_DISABLE_COPY(ElasticLoadBalancingClient)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
