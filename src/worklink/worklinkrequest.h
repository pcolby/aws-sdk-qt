// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKLINKREQUEST_H
#define QTAWS_WORKLINKREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsworklinkglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace WorkLink {

class WorkLinkRequestPrivate;

class QTAWSWORKLINK_EXPORT WorkLinkRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by WorkLink.
    enum Action {
        AssociateDomainAction,
        AssociateWebsiteAuthorizationProviderAction,
        AssociateWebsiteCertificateAuthorityAction,
        CreateFleetAction,
        DeleteFleetAction,
        DescribeAuditStreamConfigurationAction,
        DescribeCompanyNetworkConfigurationAction,
        DescribeDeviceAction,
        DescribeDevicePolicyConfigurationAction,
        DescribeDomainAction,
        DescribeFleetMetadataAction,
        DescribeIdentityProviderConfigurationAction,
        DescribeWebsiteCertificateAuthorityAction,
        DisassociateDomainAction,
        DisassociateWebsiteAuthorizationProviderAction,
        DisassociateWebsiteCertificateAuthorityAction,
        ListDevicesAction,
        ListDomainsAction,
        ListFleetsAction,
        ListTagsForResourceAction,
        ListWebsiteAuthorizationProvidersAction,
        ListWebsiteCertificateAuthoritiesAction,
        RestoreDomainAccessAction,
        RevokeDomainAccessAction,
        SignOutUserAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAuditStreamConfigurationAction,
        UpdateCompanyNetworkConfigurationAction,
        UpdateDevicePolicyConfigurationAction,
        UpdateDomainMetadataAction,
        UpdateFleetMetadataAction,
        UpdateIdentityProviderConfigurationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    WorkLinkRequest(const Action action);
    WorkLinkRequest(const WorkLinkRequest &other);
    WorkLinkRequest &operator=(const WorkLinkRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const WorkLinkRequest &other) const;


protected:
    /// @cond internal
    explicit WorkLinkRequest(WorkLinkRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkLinkRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
