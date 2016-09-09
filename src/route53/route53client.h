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

#ifndef QTAWS_ROUTE53CLIENT_H
#define QTAWS_ROUTE53CLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    Route53AssociateVPCWithHostedZoneResponse * associateVPCWithHostedZone(const Route53AssociateVPCWithHostedZoneRequest &request);
    Route53ChangeResourceRecordSetsResponse * changeResourceRecordSets(const Route53ChangeResourceRecordSetsRequest &request);
    Route53ChangeTagsForResourceResponse * changeTagsForResource(const Route53ChangeTagsForResourceRequest &request);
    Route53CreateHealthCheckResponse * createHealthCheck(const Route53CreateHealthCheckRequest &request);
    Route53CreateHostedZoneResponse * createHostedZone(const Route53CreateHostedZoneRequest &request);
    Route53CreateReusableDelegationSetResponse * createReusableDelegationSet(const Route53CreateReusableDelegationSetRequest &request);
    Route53CreateTrafficPolicyResponse * createTrafficPolicy(const Route53CreateTrafficPolicyRequest &request);
    Route53CreateTrafficPolicyInstanceResponse * createTrafficPolicyInstance(const Route53CreateTrafficPolicyInstanceRequest &request);
    Route53CreateTrafficPolicyVersionResponse * createTrafficPolicyVersion(const Route53CreateTrafficPolicyVersionRequest &request);
    Route53DeleteHealthCheckResponse * deleteHealthCheck(const Route53DeleteHealthCheckRequest &request);
    Route53DeleteHostedZoneResponse * deleteHostedZone(const Route53DeleteHostedZoneRequest &request);
    Route53DeleteReusableDelegationSetResponse * deleteReusableDelegationSet(const Route53DeleteReusableDelegationSetRequest &request);
    Route53DeleteTrafficPolicyResponse * deleteTrafficPolicy(const Route53DeleteTrafficPolicyRequest &request);
    Route53DeleteTrafficPolicyInstanceResponse * deleteTrafficPolicyInstance(const Route53DeleteTrafficPolicyInstanceRequest &request);
    Route53DisassociateVPCFromHostedZoneResponse * disassociateVPCFromHostedZone(const Route53DisassociateVPCFromHostedZoneRequest &request);
    Route53GetChangeResponse * getChange(const Route53GetChangeRequest &request);
    Route53GetChangeDetailsResponse * getChangeDetails(const Route53GetChangeDetailsRequest &request);
    Route53GetCheckerIpRangesResponse * getCheckerIpRanges(const Route53GetCheckerIpRangesRequest &request);
    Route53GetGeoLocationResponse * getGeoLocation(const Route53GetGeoLocationRequest &request);
    Route53GetHealthCheckResponse * getHealthCheck(const Route53GetHealthCheckRequest &request);
    Route53GetHealthCheckCountResponse * getHealthCheckCount(const Route53GetHealthCheckCountRequest &request);
    Route53GetHealthCheckLastFailureReasonResponse * getHealthCheckLastFailureReason(const Route53GetHealthCheckLastFailureReasonRequest &request);
    Route53GetHealthCheckStatusResponse * getHealthCheckStatus(const Route53GetHealthCheckStatusRequest &request);
    Route53GetHostedZoneResponse * getHostedZone(const Route53GetHostedZoneRequest &request);
    Route53GetHostedZoneCountResponse * getHostedZoneCount(const Route53GetHostedZoneCountRequest &request);
    Route53GetReusableDelegationSetResponse * getReusableDelegationSet(const Route53GetReusableDelegationSetRequest &request);
    Route53GetTrafficPolicyResponse * getTrafficPolicy(const Route53GetTrafficPolicyRequest &request);
    Route53GetTrafficPolicyInstanceResponse * getTrafficPolicyInstance(const Route53GetTrafficPolicyInstanceRequest &request);
    Route53GetTrafficPolicyInstanceCountResponse * getTrafficPolicyInstanceCount(const Route53GetTrafficPolicyInstanceCountRequest &request);
    Route53ListChangeBatchesByHostedZoneResponse * listChangeBatchesByHostedZone(const Route53ListChangeBatchesByHostedZoneRequest &request);
    Route53ListChangeBatchesByRRSetResponse * listChangeBatchesByRRSet(const Route53ListChangeBatchesByRRSetRequest &request);
    Route53ListGeoLocationsResponse * listGeoLocations(const Route53ListGeoLocationsRequest &request);
    Route53ListHealthChecksResponse * listHealthChecks(const Route53ListHealthChecksRequest &request);
    Route53ListHostedZonesResponse * listHostedZones(const Route53ListHostedZonesRequest &request);
    Route53ListHostedZonesByNameResponse * listHostedZonesByName(const Route53ListHostedZonesByNameRequest &request);
    Route53ListResourceRecordSetsResponse * listResourceRecordSets(const Route53ListResourceRecordSetsRequest &request);
    Route53ListReusableDelegationSetsResponse * listReusableDelegationSets(const Route53ListReusableDelegationSetsRequest &request);
    Route53ListTagsForResourceResponse * listTagsForResource(const Route53ListTagsForResourceRequest &request);
    Route53ListTagsForResourcesResponse * listTagsForResources(const Route53ListTagsForResourcesRequest &request);
    Route53ListTrafficPoliciesResponse * listTrafficPolicies(const Route53ListTrafficPoliciesRequest &request);
    Route53ListTrafficPolicyInstancesResponse * listTrafficPolicyInstances(const Route53ListTrafficPolicyInstancesRequest &request);
    Route53ListTrafficPolicyInstancesByHostedZoneResponse * listTrafficPolicyInstancesByHostedZone(const Route53ListTrafficPolicyInstancesByHostedZoneRequest &request);
    Route53ListTrafficPolicyInstancesByPolicyResponse * listTrafficPolicyInstancesByPolicy(const Route53ListTrafficPolicyInstancesByPolicyRequest &request);
    Route53ListTrafficPolicyVersionsResponse * listTrafficPolicyVersions(const Route53ListTrafficPolicyVersionsRequest &request);
    Route53TestDNSAnswerResponse * testDNSAnswer(const Route53TestDNSAnswerRequest &request);
    Route53UpdateHealthCheckResponse * updateHealthCheck(const Route53UpdateHealthCheckRequest &request);
    Route53UpdateHostedZoneCommentResponse * updateHostedZoneComment(const Route53UpdateHostedZoneCommentRequest &request);
    Route53UpdateTrafficPolicyCommentResponse * updateTrafficPolicyComment(const Route53UpdateTrafficPolicyCommentRequest &request);
    Route53UpdateTrafficPolicyInstanceResponse * updateTrafficPolicyInstance(const Route53UpdateTrafficPolicyInstanceRequest &request);

private:
    Q_DECLARE_PRIVATE(Route53Client)
    Q_DISABLE_COPY(Route53Client)

};

QTAWS_END_NAMESPACE

#endif
