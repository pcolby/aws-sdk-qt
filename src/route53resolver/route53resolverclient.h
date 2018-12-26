/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_ROUTE53RESOLVERCLIENT_H
#define QTAWS_ROUTE53RESOLVERCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Route53Resolver {

class Route53ResolverClientPrivate;
class AssociateResolverEndpointIpAddressRequest;
class AssociateResolverEndpointIpAddressResponse;
class AssociateResolverRuleRequest;
class AssociateResolverRuleResponse;
class CreateResolverEndpointRequest;
class CreateResolverEndpointResponse;
class CreateResolverRuleRequest;
class CreateResolverRuleResponse;
class DeleteResolverEndpointRequest;
class DeleteResolverEndpointResponse;
class DeleteResolverRuleRequest;
class DeleteResolverRuleResponse;
class DisassociateResolverEndpointIpAddressRequest;
class DisassociateResolverEndpointIpAddressResponse;
class DisassociateResolverRuleRequest;
class DisassociateResolverRuleResponse;
class GetResolverEndpointRequest;
class GetResolverEndpointResponse;
class GetResolverRuleRequest;
class GetResolverRuleResponse;
class GetResolverRuleAssociationRequest;
class GetResolverRuleAssociationResponse;
class GetResolverRulePolicyRequest;
class GetResolverRulePolicyResponse;
class ListResolverEndpointIpAddressesRequest;
class ListResolverEndpointIpAddressesResponse;
class ListResolverEndpointsRequest;
class ListResolverEndpointsResponse;
class ListResolverRuleAssociationsRequest;
class ListResolverRuleAssociationsResponse;
class ListResolverRulesRequest;
class ListResolverRulesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutResolverRulePolicyRequest;
class PutResolverRulePolicyResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateResolverEndpointRequest;
class UpdateResolverEndpointResponse;
class UpdateResolverRuleRequest;
class UpdateResolverRuleResponse;

class QTAWS_EXPORT Route53ResolverClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Route53ResolverClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    Route53ResolverClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateResolverEndpointIpAddressResponse * associateResolverEndpointIpAddress(const AssociateResolverEndpointIpAddressRequest &request);
    AssociateResolverRuleResponse * associateResolverRule(const AssociateResolverRuleRequest &request);
    CreateResolverEndpointResponse * createResolverEndpoint(const CreateResolverEndpointRequest &request);
    CreateResolverRuleResponse * createResolverRule(const CreateResolverRuleRequest &request);
    DeleteResolverEndpointResponse * deleteResolverEndpoint(const DeleteResolverEndpointRequest &request);
    DeleteResolverRuleResponse * deleteResolverRule(const DeleteResolverRuleRequest &request);
    DisassociateResolverEndpointIpAddressResponse * disassociateResolverEndpointIpAddress(const DisassociateResolverEndpointIpAddressRequest &request);
    DisassociateResolverRuleResponse * disassociateResolverRule(const DisassociateResolverRuleRequest &request);
    GetResolverEndpointResponse * getResolverEndpoint(const GetResolverEndpointRequest &request);
    GetResolverRuleResponse * getResolverRule(const GetResolverRuleRequest &request);
    GetResolverRuleAssociationResponse * getResolverRuleAssociation(const GetResolverRuleAssociationRequest &request);
    GetResolverRulePolicyResponse * getResolverRulePolicy(const GetResolverRulePolicyRequest &request);
    ListResolverEndpointIpAddressesResponse * listResolverEndpointIpAddresses(const ListResolverEndpointIpAddressesRequest &request);
    ListResolverEndpointsResponse * listResolverEndpoints(const ListResolverEndpointsRequest &request);
    ListResolverRuleAssociationsResponse * listResolverRuleAssociations(const ListResolverRuleAssociationsRequest &request);
    ListResolverRulesResponse * listResolverRules(const ListResolverRulesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutResolverRulePolicyResponse * putResolverRulePolicy(const PutResolverRulePolicyRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateResolverEndpointResponse * updateResolverEndpoint(const UpdateResolverEndpointRequest &request);
    UpdateResolverRuleResponse * updateResolverRule(const UpdateResolverRuleRequest &request);

private:
    Q_DECLARE_PRIVATE(Route53ResolverClient)
    Q_DISABLE_COPY(Route53ResolverClient)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
