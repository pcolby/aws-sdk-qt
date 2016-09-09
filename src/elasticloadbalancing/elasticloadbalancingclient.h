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

#ifndef QTAWS_ELASTICLOADBALANCINGCLIENT_H
#define QTAWS_ELASTICLOADBALANCINGCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class ElasticLoadBalancingClientPrivate;

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
    ElasticLoadBalancingAddTagsResponse * addTags(const ElasticLoadBalancingAddTagsRequest &request);
    ElasticLoadBalancingApplySecurityGroupsToLoadBalancerResponse * applySecurityGroupsToLoadBalancer(const ElasticLoadBalancingApplySecurityGroupsToLoadBalancerRequest &request);
    ElasticLoadBalancingAttachLoadBalancerToSubnetsResponse * attachLoadBalancerToSubnets(const ElasticLoadBalancingAttachLoadBalancerToSubnetsRequest &request);
    ElasticLoadBalancingConfigureHealthCheckResponse * configureHealthCheck(const ElasticLoadBalancingConfigureHealthCheckRequest &request);
    ElasticLoadBalancingCreateAppCookieStickinessPolicyResponse * createAppCookieStickinessPolicy(const ElasticLoadBalancingCreateAppCookieStickinessPolicyRequest &request);
    ElasticLoadBalancingCreateLBCookieStickinessPolicyResponse * createLBCookieStickinessPolicy(const ElasticLoadBalancingCreateLBCookieStickinessPolicyRequest &request);
    ElasticLoadBalancingCreateLoadBalancerResponse * createLoadBalancer(const ElasticLoadBalancingCreateLoadBalancerRequest &request);
    ElasticLoadBalancingCreateLoadBalancerListenersResponse * createLoadBalancerListeners(const ElasticLoadBalancingCreateLoadBalancerListenersRequest &request);
    ElasticLoadBalancingCreateLoadBalancerPolicyResponse * createLoadBalancerPolicy(const ElasticLoadBalancingCreateLoadBalancerPolicyRequest &request);
    ElasticLoadBalancingDeleteLoadBalancerResponse * deleteLoadBalancer(const ElasticLoadBalancingDeleteLoadBalancerRequest &request);
    ElasticLoadBalancingDeleteLoadBalancerListenersResponse * deleteLoadBalancerListeners(const ElasticLoadBalancingDeleteLoadBalancerListenersRequest &request);
    ElasticLoadBalancingDeleteLoadBalancerPolicyResponse * deleteLoadBalancerPolicy(const ElasticLoadBalancingDeleteLoadBalancerPolicyRequest &request);
    ElasticLoadBalancingDeregisterInstancesFromLoadBalancerResponse * deregisterInstancesFromLoadBalancer(const ElasticLoadBalancingDeregisterInstancesFromLoadBalancerRequest &request);
    ElasticLoadBalancingDescribeInstanceHealthResponse * describeInstanceHealth(const ElasticLoadBalancingDescribeInstanceHealthRequest &request);
    ElasticLoadBalancingDescribeLoadBalancerAttributesResponse * describeLoadBalancerAttributes(const ElasticLoadBalancingDescribeLoadBalancerAttributesRequest &request);
    ElasticLoadBalancingDescribeLoadBalancerPoliciesResponse * describeLoadBalancerPolicies(const ElasticLoadBalancingDescribeLoadBalancerPoliciesRequest &request);
    ElasticLoadBalancingDescribeLoadBalancerPolicyTypesResponse * describeLoadBalancerPolicyTypes(const ElasticLoadBalancingDescribeLoadBalancerPolicyTypesRequest &request);
    ElasticLoadBalancingDescribeLoadBalancersResponse * describeLoadBalancers(const ElasticLoadBalancingDescribeLoadBalancersRequest &request);
    ElasticLoadBalancingDescribeTagsResponse * describeTags(const ElasticLoadBalancingDescribeTagsRequest &request);
    ElasticLoadBalancingDetachLoadBalancerFromSubnetsResponse * detachLoadBalancerFromSubnets(const ElasticLoadBalancingDetachLoadBalancerFromSubnetsRequest &request);
    ElasticLoadBalancingDisableAvailabilityZonesForLoadBalancerResponse * disableAvailabilityZonesForLoadBalancer(const ElasticLoadBalancingDisableAvailabilityZonesForLoadBalancerRequest &request);
    ElasticLoadBalancingEnableAvailabilityZonesForLoadBalancerResponse * enableAvailabilityZonesForLoadBalancer(const ElasticLoadBalancingEnableAvailabilityZonesForLoadBalancerRequest &request);
    ElasticLoadBalancingModifyLoadBalancerAttributesResponse * modifyLoadBalancerAttributes(const ElasticLoadBalancingModifyLoadBalancerAttributesRequest &request);
    ElasticLoadBalancingRegisterInstancesWithLoadBalancerResponse * registerInstancesWithLoadBalancer(const ElasticLoadBalancingRegisterInstancesWithLoadBalancerRequest &request);
    ElasticLoadBalancingRemoveTagsResponse * removeTags(const ElasticLoadBalancingRemoveTagsRequest &request);
    ElasticLoadBalancingSetLoadBalancerListenerSSLCertificateResponse * setLoadBalancerListenerSSLCertificate(const ElasticLoadBalancingSetLoadBalancerListenerSSLCertificateRequest &request);
    ElasticLoadBalancingSetLoadBalancerPoliciesForBackendServerResponse * setLoadBalancerPoliciesForBackendServer(const ElasticLoadBalancingSetLoadBalancerPoliciesForBackendServerRequest &request);
    ElasticLoadBalancingSetLoadBalancerPoliciesOfListenerResponse * setLoadBalancerPoliciesOfListener(const ElasticLoadBalancingSetLoadBalancerPoliciesOfListenerRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingClient)
    Q_DISABLE_COPY(ElasticLoadBalancingClient)

};

QTAWS_END_NAMESPACE

#endif
