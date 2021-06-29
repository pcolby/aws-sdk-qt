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

#ifndef QTAWS_CLOUDFRONTREQUEST_H
#define QTAWS_CLOUDFRONTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudfrontglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudFront {

class CloudFrontRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CloudFrontRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudFront.
    enum Action {
        CreateCachePolicyAction,
        CreateCloudFrontOriginAccessIdentityAction,
        CreateDistributionAction,
        CreateDistributionWithTagsAction,
        CreateFieldLevelEncryptionConfigAction,
        CreateFieldLevelEncryptionProfileAction,
        CreateFunctionAction,
        CreateInvalidationAction,
        CreateKeyGroupAction,
        CreateMonitoringSubscriptionAction,
        CreateOriginRequestPolicyAction,
        CreatePublicKeyAction,
        CreateRealtimeLogConfigAction,
        CreateStreamingDistributionAction,
        CreateStreamingDistributionWithTagsAction,
        DeleteCachePolicyAction,
        DeleteCloudFrontOriginAccessIdentityAction,
        DeleteDistributionAction,
        DeleteFieldLevelEncryptionConfigAction,
        DeleteFieldLevelEncryptionProfileAction,
        DeleteFunctionAction,
        DeleteKeyGroupAction,
        DeleteMonitoringSubscriptionAction,
        DeleteOriginRequestPolicyAction,
        DeletePublicKeyAction,
        DeleteRealtimeLogConfigAction,
        DeleteStreamingDistributionAction,
        DescribeFunctionAction,
        GetCachePolicyAction,
        GetCachePolicyConfigAction,
        GetCloudFrontOriginAccessIdentityAction,
        GetCloudFrontOriginAccessIdentityConfigAction,
        GetDistributionAction,
        GetDistributionConfigAction,
        GetFieldLevelEncryptionAction,
        GetFieldLevelEncryptionConfigAction,
        GetFieldLevelEncryptionProfileAction,
        GetFieldLevelEncryptionProfileConfigAction,
        GetFunctionAction,
        GetInvalidationAction,
        GetKeyGroupAction,
        GetKeyGroupConfigAction,
        GetMonitoringSubscriptionAction,
        GetOriginRequestPolicyAction,
        GetOriginRequestPolicyConfigAction,
        GetPublicKeyAction,
        GetPublicKeyConfigAction,
        GetRealtimeLogConfigAction,
        GetStreamingDistributionAction,
        GetStreamingDistributionConfigAction,
        ListCachePoliciesAction,
        ListCloudFrontOriginAccessIdentitiesAction,
        ListDistributionsAction,
        ListDistributionsByCachePolicyIdAction,
        ListDistributionsByKeyGroupAction,
        ListDistributionsByOriginRequestPolicyIdAction,
        ListDistributionsByRealtimeLogConfigAction,
        ListDistributionsByWebACLIdAction,
        ListFieldLevelEncryptionConfigsAction,
        ListFieldLevelEncryptionProfilesAction,
        ListFunctionsAction,
        ListInvalidationsAction,
        ListKeyGroupsAction,
        ListOriginRequestPoliciesAction,
        ListPublicKeysAction,
        ListRealtimeLogConfigsAction,
        ListStreamingDistributionsAction,
        ListTagsForResourceAction,
        PublishFunctionAction,
        TagResourceAction,
        TestFunctionAction,
        UntagResourceAction,
        UpdateCachePolicyAction,
        UpdateCloudFrontOriginAccessIdentityAction,
        UpdateDistributionAction,
        UpdateFieldLevelEncryptionConfigAction,
        UpdateFieldLevelEncryptionProfileAction,
        UpdateFunctionAction,
        UpdateKeyGroupAction,
        UpdateOriginRequestPolicyAction,
        UpdatePublicKeyAction,
        UpdateRealtimeLogConfigAction,
        UpdateStreamingDistributionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudFrontRequest(const Action action);
    CloudFrontRequest(const CloudFrontRequest &other);
    CloudFrontRequest &operator=(const CloudFrontRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudFrontRequest &other) const;


protected:
    /// @cond internal
    CloudFrontRequestPrivate * const d_ptr; ///< Internal d-pointer.
    CloudFrontRequest(CloudFrontRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudFrontRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
