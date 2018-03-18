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

#ifndef QTAWS_ROUTE53CLIENT_H
#define QTAWS_ROUTE53CLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Route53 {

class Route53ClientPrivate;

class QTAWS_EXPORT Route53Client : public AwsAbstractClient {
    Q_OBJECT

public:
    Route53Client(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    Route53Client(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateVPCWithHostedZoneResponse * associateVPCWithHostedZone(const AssociateVPCWithHostedZoneRequest &request);
    ChangeResourceRecordSetsResponse * changeResourceRecordSets(const ChangeResourceRecordSetsRequest &request);
    ChangeTagsForResourceResponse * changeTagsForResource(const ChangeTagsForResourceRequest &request);
    CreateHealthCheckResponse * createHealthCheck(const CreateHealthCheckRequest &request);
    CreateHostedZoneResponse * createHostedZone(const CreateHostedZoneRequest &request);
    CreateQueryLoggingConfigResponse * createQueryLoggingConfig(const CreateQueryLoggingConfigRequest &request);
    CreateReusableDelegationSetResponse * createReusableDelegationSet(const CreateReusableDelegationSetRequest &request);
    CreateTrafficPolicyResponse * createTrafficPolicy(const CreateTrafficPolicyRequest &request);
    CreateTrafficPolicyInstanceResponse * createTrafficPolicyInstance(const CreateTrafficPolicyInstanceRequest &request);
    CreateTrafficPolicyVersionResponse * createTrafficPolicyVersion(const CreateTrafficPolicyVersionRequest &request);
    CreateVPCAssociationAuthorizationResponse * createVPCAssociationAuthorization(const CreateVPCAssociationAuthorizationRequest &request);
    DeleteHealthCheckResponse * deleteHealthCheck(const DeleteHealthCheckRequest &request);
    DeleteHostedZoneResponse * deleteHostedZone(const DeleteHostedZoneRequest &request);
    DeleteQueryLoggingConfigResponse * deleteQueryLoggingConfig(const DeleteQueryLoggingConfigRequest &request);
    DeleteReusableDelegationSetResponse * deleteReusableDelegationSet(const DeleteReusableDelegationSetRequest &request);
    DeleteTrafficPolicyResponse * deleteTrafficPolicy(const DeleteTrafficPolicyRequest &request);
    DeleteTrafficPolicyInstanceResponse * deleteTrafficPolicyInstance(const DeleteTrafficPolicyInstanceRequest &request);
    DeleteVPCAssociationAuthorizationResponse * deleteVPCAssociationAuthorization(const DeleteVPCAssociationAuthorizationRequest &request);
    DisassociateVPCFromHostedZoneResponse * disassociateVPCFromHostedZone(const DisassociateVPCFromHostedZoneRequest &request);
    GetAccountLimitResponse * getAccountLimit(const GetAccountLimitRequest &request);
    GetChangeResponse * getChange(const GetChangeRequest &request);
    GetCheckerIpRangesResponse * getCheckerIpRanges(const GetCheckerIpRangesRequest &request);
    GetGeoLocationResponse * getGeoLocation(const GetGeoLocationRequest &request);
    GetHealthCheckResponse * getHealthCheck(const GetHealthCheckRequest &request);
    GetHealthCheckCountResponse * getHealthCheckCount(const GetHealthCheckCountRequest &request);
    GetHealthCheckLastFailureReasonResponse * getHealthCheckLastFailureReason(const GetHealthCheckLastFailureReasonRequest &request);
    GetHealthCheckStatusResponse * getHealthCheckStatus(const GetHealthCheckStatusRequest &request);
    GetHostedZoneResponse * getHostedZone(const GetHostedZoneRequest &request);
    GetHostedZoneCountResponse * getHostedZoneCount(const GetHostedZoneCountRequest &request);
    GetHostedZoneLimitResponse * getHostedZoneLimit(const GetHostedZoneLimitRequest &request);
    GetQueryLoggingConfigResponse * getQueryLoggingConfig(const GetQueryLoggingConfigRequest &request);
    GetReusableDelegationSetResponse * getReusableDelegationSet(const GetReusableDelegationSetRequest &request);
    GetReusableDelegationSetLimitResponse * getReusableDelegationSetLimit(const GetReusableDelegationSetLimitRequest &request);
    GetTrafficPolicyResponse * getTrafficPolicy(const GetTrafficPolicyRequest &request);
    GetTrafficPolicyInstanceResponse * getTrafficPolicyInstance(const GetTrafficPolicyInstanceRequest &request);
    GetTrafficPolicyInstanceCountResponse * getTrafficPolicyInstanceCount(const GetTrafficPolicyInstanceCountRequest &request);
    ListGeoLocationsResponse * listGeoLocations(const ListGeoLocationsRequest &request);
    ListHealthChecksResponse * listHealthChecks(const ListHealthChecksRequest &request);
    ListHostedZonesResponse * listHostedZones(const ListHostedZonesRequest &request);
    ListHostedZonesByNameResponse * listHostedZonesByName(const ListHostedZonesByNameRequest &request);
    ListQueryLoggingConfigsResponse * listQueryLoggingConfigs(const ListQueryLoggingConfigsRequest &request);
    ListResourceRecordSetsResponse * listResourceRecordSets(const ListResourceRecordSetsRequest &request);
    ListReusableDelegationSetsResponse * listReusableDelegationSets(const ListReusableDelegationSetsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTagsForResourcesResponse * listTagsForResources(const ListTagsForResourcesRequest &request);
    ListTrafficPoliciesResponse * listTrafficPolicies(const ListTrafficPoliciesRequest &request);
    ListTrafficPolicyInstancesResponse * listTrafficPolicyInstances(const ListTrafficPolicyInstancesRequest &request);
    ListTrafficPolicyInstancesByHostedZoneResponse * listTrafficPolicyInstancesByHostedZone(const ListTrafficPolicyInstancesByHostedZoneRequest &request);
    ListTrafficPolicyInstancesByPolicyResponse * listTrafficPolicyInstancesByPolicy(const ListTrafficPolicyInstancesByPolicyRequest &request);
    ListTrafficPolicyVersionsResponse * listTrafficPolicyVersions(const ListTrafficPolicyVersionsRequest &request);
    ListVPCAssociationAuthorizationsResponse * listVPCAssociationAuthorizations(const ListVPCAssociationAuthorizationsRequest &request);
    TestDNSAnswerResponse * testDNSAnswer(const TestDNSAnswerRequest &request);
    UpdateHealthCheckResponse * updateHealthCheck(const UpdateHealthCheckRequest &request);
    UpdateHostedZoneCommentResponse * updateHostedZoneComment(const UpdateHostedZoneCommentRequest &request);
    UpdateTrafficPolicyCommentResponse * updateTrafficPolicyComment(const UpdateTrafficPolicyCommentRequest &request);
    UpdateTrafficPolicyInstanceResponse * updateTrafficPolicyInstance(const UpdateTrafficPolicyInstanceRequest &request);

private:
    Q_DECLARE_PRIVATE(Route53Client)
    Q_DISABLE_COPY(Route53Client)

};

} // namespace Route53
} // namespace AWS

#endif
