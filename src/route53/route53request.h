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

#ifndef QTAWS_ROUTE53REQUEST_H
#define QTAWS_ROUTE53REQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Route53 {

class Route53RequestPrivate;

class QTAWS_EXPORT Route53Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Route53.
    enum Action {
        AssociateVPCWithHostedZoneAction,
        ChangeResourceRecordSetsAction,
        ChangeTagsForResourceAction,
        CreateHealthCheckAction,
        CreateHostedZoneAction,
        CreateQueryLoggingConfigAction,
        CreateReusableDelegationSetAction,
        CreateTrafficPolicyAction,
        CreateTrafficPolicyInstanceAction,
        CreateTrafficPolicyVersionAction,
        CreateVPCAssociationAuthorizationAction,
        DeleteHealthCheckAction,
        DeleteHostedZoneAction,
        DeleteQueryLoggingConfigAction,
        DeleteReusableDelegationSetAction,
        DeleteTrafficPolicyAction,
        DeleteTrafficPolicyInstanceAction,
        DeleteVPCAssociationAuthorizationAction,
        DisassociateVPCFromHostedZoneAction,
        GetAccountLimitAction,
        GetChangeAction,
        GetCheckerIpRangesAction,
        GetGeoLocationAction,
        GetHealthCheckAction,
        GetHealthCheckCountAction,
        GetHealthCheckLastFailureReasonAction,
        GetHealthCheckStatusAction,
        GetHostedZoneAction,
        GetHostedZoneCountAction,
        GetHostedZoneLimitAction,
        GetQueryLoggingConfigAction,
        GetReusableDelegationSetAction,
        GetReusableDelegationSetLimitAction,
        GetTrafficPolicyAction,
        GetTrafficPolicyInstanceAction,
        GetTrafficPolicyInstanceCountAction,
        ListGeoLocationsAction,
        ListHealthChecksAction,
        ListHostedZonesAction,
        ListHostedZonesByNameAction,
        ListQueryLoggingConfigsAction,
        ListResourceRecordSetsAction,
        ListReusableDelegationSetsAction,
        ListTagsForResourceAction,
        ListTagsForResourcesAction,
        ListTrafficPoliciesAction,
        ListTrafficPolicyInstancesAction,
        ListTrafficPolicyInstancesByHostedZoneAction,
        ListTrafficPolicyInstancesByPolicyAction,
        ListTrafficPolicyVersionsAction,
        ListVPCAssociationAuthorizationsAction,
        TestDNSAnswerAction,
        UpdateHealthCheckAction,
        UpdateHostedZoneCommentAction,
        UpdateTrafficPolicyCommentAction,
        UpdateTrafficPolicyInstanceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Route53Request(const Action action);
    Route53Request(const Route53Request &other);
    Route53Request &operator=(const Route53Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Route53Request &other) const;


protected:
    /// @cond internal
    Route53Request(Route53RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53Request)

};

} // namespace Route53
} // namespace QtAws

#endif
