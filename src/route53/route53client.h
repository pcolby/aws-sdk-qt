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

#ifndef QTAWS_ROUTE53CLIENT_H
#define QTAWS_ROUTE53CLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Route53 {

class Route53ClientPrivate;
class ActivateKeySigningKeyRequest;
class ActivateKeySigningKeyResponse;
class AssociateVPCWithHostedZoneRequest;
class AssociateVPCWithHostedZoneResponse;
class ChangeResourceRecordSetsRequest;
class ChangeResourceRecordSetsResponse;
class ChangeTagsForResourceRequest;
class ChangeTagsForResourceResponse;
class CreateHealthCheckRequest;
class CreateHealthCheckResponse;
class CreateHostedZoneRequest;
class CreateHostedZoneResponse;
class CreateKeySigningKeyRequest;
class CreateKeySigningKeyResponse;
class CreateQueryLoggingConfigRequest;
class CreateQueryLoggingConfigResponse;
class CreateReusableDelegationSetRequest;
class CreateReusableDelegationSetResponse;
class CreateTrafficPolicyRequest;
class CreateTrafficPolicyResponse;
class CreateTrafficPolicyInstanceRequest;
class CreateTrafficPolicyInstanceResponse;
class CreateTrafficPolicyVersionRequest;
class CreateTrafficPolicyVersionResponse;
class CreateVPCAssociationAuthorizationRequest;
class CreateVPCAssociationAuthorizationResponse;
class DeactivateKeySigningKeyRequest;
class DeactivateKeySigningKeyResponse;
class DeleteHealthCheckRequest;
class DeleteHealthCheckResponse;
class DeleteHostedZoneRequest;
class DeleteHostedZoneResponse;
class DeleteKeySigningKeyRequest;
class DeleteKeySigningKeyResponse;
class DeleteQueryLoggingConfigRequest;
class DeleteQueryLoggingConfigResponse;
class DeleteReusableDelegationSetRequest;
class DeleteReusableDelegationSetResponse;
class DeleteTrafficPolicyRequest;
class DeleteTrafficPolicyResponse;
class DeleteTrafficPolicyInstanceRequest;
class DeleteTrafficPolicyInstanceResponse;
class DeleteVPCAssociationAuthorizationRequest;
class DeleteVPCAssociationAuthorizationResponse;
class DisableHostedZoneDNSSECRequest;
class DisableHostedZoneDNSSECResponse;
class DisassociateVPCFromHostedZoneRequest;
class DisassociateVPCFromHostedZoneResponse;
class EnableHostedZoneDNSSECRequest;
class EnableHostedZoneDNSSECResponse;
class GetAccountLimitRequest;
class GetAccountLimitResponse;
class GetChangeRequest;
class GetChangeResponse;
class GetCheckerIpRangesRequest;
class GetCheckerIpRangesResponse;
class GetDNSSECRequest;
class GetDNSSECResponse;
class GetGeoLocationRequest;
class GetGeoLocationResponse;
class GetHealthCheckRequest;
class GetHealthCheckResponse;
class GetHealthCheckCountRequest;
class GetHealthCheckCountResponse;
class GetHealthCheckLastFailureReasonRequest;
class GetHealthCheckLastFailureReasonResponse;
class GetHealthCheckStatusRequest;
class GetHealthCheckStatusResponse;
class GetHostedZoneRequest;
class GetHostedZoneResponse;
class GetHostedZoneCountRequest;
class GetHostedZoneCountResponse;
class GetHostedZoneLimitRequest;
class GetHostedZoneLimitResponse;
class GetQueryLoggingConfigRequest;
class GetQueryLoggingConfigResponse;
class GetReusableDelegationSetRequest;
class GetReusableDelegationSetResponse;
class GetReusableDelegationSetLimitRequest;
class GetReusableDelegationSetLimitResponse;
class GetTrafficPolicyRequest;
class GetTrafficPolicyResponse;
class GetTrafficPolicyInstanceRequest;
class GetTrafficPolicyInstanceResponse;
class GetTrafficPolicyInstanceCountRequest;
class GetTrafficPolicyInstanceCountResponse;
class ListGeoLocationsRequest;
class ListGeoLocationsResponse;
class ListHealthChecksRequest;
class ListHealthChecksResponse;
class ListHostedZonesRequest;
class ListHostedZonesResponse;
class ListHostedZonesByNameRequest;
class ListHostedZonesByNameResponse;
class ListHostedZonesByVPCRequest;
class ListHostedZonesByVPCResponse;
class ListQueryLoggingConfigsRequest;
class ListQueryLoggingConfigsResponse;
class ListResourceRecordSetsRequest;
class ListResourceRecordSetsResponse;
class ListReusableDelegationSetsRequest;
class ListReusableDelegationSetsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTagsForResourcesRequest;
class ListTagsForResourcesResponse;
class ListTrafficPoliciesRequest;
class ListTrafficPoliciesResponse;
class ListTrafficPolicyInstancesRequest;
class ListTrafficPolicyInstancesResponse;
class ListTrafficPolicyInstancesByHostedZoneRequest;
class ListTrafficPolicyInstancesByHostedZoneResponse;
class ListTrafficPolicyInstancesByPolicyRequest;
class ListTrafficPolicyInstancesByPolicyResponse;
class ListTrafficPolicyVersionsRequest;
class ListTrafficPolicyVersionsResponse;
class ListVPCAssociationAuthorizationsRequest;
class ListVPCAssociationAuthorizationsResponse;
class TestDNSAnswerRequest;
class TestDNSAnswerResponse;
class UpdateHealthCheckRequest;
class UpdateHealthCheckResponse;
class UpdateHostedZoneCommentRequest;
class UpdateHostedZoneCommentResponse;
class UpdateTrafficPolicyCommentRequest;
class UpdateTrafficPolicyCommentResponse;
class UpdateTrafficPolicyInstanceRequest;
class UpdateTrafficPolicyInstanceResponse;

class QTAWS_EXPORT Route53Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Route53Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    Route53Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ActivateKeySigningKeyResponse * activateKeySigningKey(const ActivateKeySigningKeyRequest &request);
    AssociateVPCWithHostedZoneResponse * associateVPCWithHostedZone(const AssociateVPCWithHostedZoneRequest &request);
    ChangeResourceRecordSetsResponse * changeResourceRecordSets(const ChangeResourceRecordSetsRequest &request);
    ChangeTagsForResourceResponse * changeTagsForResource(const ChangeTagsForResourceRequest &request);
    CreateHealthCheckResponse * createHealthCheck(const CreateHealthCheckRequest &request);
    CreateHostedZoneResponse * createHostedZone(const CreateHostedZoneRequest &request);
    CreateKeySigningKeyResponse * createKeySigningKey(const CreateKeySigningKeyRequest &request);
    CreateQueryLoggingConfigResponse * createQueryLoggingConfig(const CreateQueryLoggingConfigRequest &request);
    CreateReusableDelegationSetResponse * createReusableDelegationSet(const CreateReusableDelegationSetRequest &request);
    CreateTrafficPolicyResponse * createTrafficPolicy(const CreateTrafficPolicyRequest &request);
    CreateTrafficPolicyInstanceResponse * createTrafficPolicyInstance(const CreateTrafficPolicyInstanceRequest &request);
    CreateTrafficPolicyVersionResponse * createTrafficPolicyVersion(const CreateTrafficPolicyVersionRequest &request);
    CreateVPCAssociationAuthorizationResponse * createVPCAssociationAuthorization(const CreateVPCAssociationAuthorizationRequest &request);
    DeactivateKeySigningKeyResponse * deactivateKeySigningKey(const DeactivateKeySigningKeyRequest &request);
    DeleteHealthCheckResponse * deleteHealthCheck(const DeleteHealthCheckRequest &request);
    DeleteHostedZoneResponse * deleteHostedZone(const DeleteHostedZoneRequest &request);
    DeleteKeySigningKeyResponse * deleteKeySigningKey(const DeleteKeySigningKeyRequest &request);
    DeleteQueryLoggingConfigResponse * deleteQueryLoggingConfig(const DeleteQueryLoggingConfigRequest &request);
    DeleteReusableDelegationSetResponse * deleteReusableDelegationSet(const DeleteReusableDelegationSetRequest &request);
    DeleteTrafficPolicyResponse * deleteTrafficPolicy(const DeleteTrafficPolicyRequest &request);
    DeleteTrafficPolicyInstanceResponse * deleteTrafficPolicyInstance(const DeleteTrafficPolicyInstanceRequest &request);
    DeleteVPCAssociationAuthorizationResponse * deleteVPCAssociationAuthorization(const DeleteVPCAssociationAuthorizationRequest &request);
    DisableHostedZoneDNSSECResponse * disableHostedZoneDNSSEC(const DisableHostedZoneDNSSECRequest &request);
    DisassociateVPCFromHostedZoneResponse * disassociateVPCFromHostedZone(const DisassociateVPCFromHostedZoneRequest &request);
    EnableHostedZoneDNSSECResponse * enableHostedZoneDNSSEC(const EnableHostedZoneDNSSECRequest &request);
    GetAccountLimitResponse * getAccountLimit(const GetAccountLimitRequest &request);
    GetChangeResponse * getChange(const GetChangeRequest &request);
    GetCheckerIpRangesResponse * getCheckerIpRanges(const GetCheckerIpRangesRequest &request);
    GetDNSSECResponse * getDNSSEC(const GetDNSSECRequest &request);
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
    ListHostedZonesByVPCResponse * listHostedZonesByVPC(const ListHostedZonesByVPCRequest &request);
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

protected:
    /// @cond internal
    Route53ClientPrivate * const d_ptr; ///< Internal d-pointer.
    Route53Client(Route53ClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(Route53Client)
    Q_DISABLE_COPY(Route53Client)

};

} // namespace Route53
} // namespace QtAws

#endif
