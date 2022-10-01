// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
        AssociateAliasAction,
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
        CreateOriginAccessControlAction,
        CreateOriginRequestPolicyAction,
        CreatePublicKeyAction,
        CreateRealtimeLogConfigAction,
        CreateResponseHeadersPolicyAction,
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
        DeleteOriginAccessControlAction,
        DeleteOriginRequestPolicyAction,
        DeletePublicKeyAction,
        DeleteRealtimeLogConfigAction,
        DeleteResponseHeadersPolicyAction,
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
        GetOriginAccessControlAction,
        GetOriginAccessControlConfigAction,
        GetOriginRequestPolicyAction,
        GetOriginRequestPolicyConfigAction,
        GetPublicKeyAction,
        GetPublicKeyConfigAction,
        GetRealtimeLogConfigAction,
        GetResponseHeadersPolicyAction,
        GetResponseHeadersPolicyConfigAction,
        GetStreamingDistributionAction,
        GetStreamingDistributionConfigAction,
        ListCachePoliciesAction,
        ListCloudFrontOriginAccessIdentitiesAction,
        ListConflictingAliasesAction,
        ListDistributionsAction,
        ListDistributionsByCachePolicyIdAction,
        ListDistributionsByKeyGroupAction,
        ListDistributionsByOriginRequestPolicyIdAction,
        ListDistributionsByRealtimeLogConfigAction,
        ListDistributionsByResponseHeadersPolicyIdAction,
        ListDistributionsByWebACLIdAction,
        ListFieldLevelEncryptionConfigsAction,
        ListFieldLevelEncryptionProfilesAction,
        ListFunctionsAction,
        ListInvalidationsAction,
        ListKeyGroupsAction,
        ListOriginAccessControlsAction,
        ListOriginRequestPoliciesAction,
        ListPublicKeysAction,
        ListRealtimeLogConfigsAction,
        ListResponseHeadersPoliciesAction,
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
        UpdateOriginAccessControlAction,
        UpdateOriginRequestPolicyAction,
        UpdatePublicKeyAction,
        UpdateRealtimeLogConfigAction,
        UpdateResponseHeadersPolicyAction,
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
    explicit CloudFrontRequest(CloudFrontRequestPrivate * const d);
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
