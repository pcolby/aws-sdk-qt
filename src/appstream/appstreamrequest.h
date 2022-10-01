// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSTREAMREQUEST_H
#define QTAWS_APPSTREAMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsappstreamglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AppStream {

class AppStreamRequestPrivate;

class QTAWSAPPSTREAM_EXPORT AppStreamRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AppStream.
    enum Action {
        AssociateApplicationFleetAction,
        AssociateApplicationToEntitlementAction,
        AssociateFleetAction,
        BatchAssociateUserStackAction,
        BatchDisassociateUserStackAction,
        CopyImageAction,
        CreateAppBlockAction,
        CreateApplicationAction,
        CreateDirectoryConfigAction,
        CreateEntitlementAction,
        CreateFleetAction,
        CreateImageBuilderAction,
        CreateImageBuilderStreamingURLAction,
        CreateStackAction,
        CreateStreamingURLAction,
        CreateUpdatedImageAction,
        CreateUsageReportSubscriptionAction,
        CreateUserAction,
        DeleteAppBlockAction,
        DeleteApplicationAction,
        DeleteDirectoryConfigAction,
        DeleteEntitlementAction,
        DeleteFleetAction,
        DeleteImageAction,
        DeleteImageBuilderAction,
        DeleteImagePermissionsAction,
        DeleteStackAction,
        DeleteUsageReportSubscriptionAction,
        DeleteUserAction,
        DescribeAppBlocksAction,
        DescribeApplicationFleetAssociationsAction,
        DescribeApplicationsAction,
        DescribeDirectoryConfigsAction,
        DescribeEntitlementsAction,
        DescribeFleetsAction,
        DescribeImageBuildersAction,
        DescribeImagePermissionsAction,
        DescribeImagesAction,
        DescribeSessionsAction,
        DescribeStacksAction,
        DescribeUsageReportSubscriptionsAction,
        DescribeUserStackAssociationsAction,
        DescribeUsersAction,
        DisableUserAction,
        DisassociateApplicationFleetAction,
        DisassociateApplicationFromEntitlementAction,
        DisassociateFleetAction,
        EnableUserAction,
        ExpireSessionAction,
        ListAssociatedFleetsAction,
        ListAssociatedStacksAction,
        ListEntitledApplicationsAction,
        ListTagsForResourceAction,
        StartFleetAction,
        StartImageBuilderAction,
        StopFleetAction,
        StopImageBuilderAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationAction,
        UpdateDirectoryConfigAction,
        UpdateEntitlementAction,
        UpdateFleetAction,
        UpdateImagePermissionsAction,
        UpdateStackAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AppStreamRequest(const Action action);
    AppStreamRequest(const AppStreamRequest &other);
    AppStreamRequest &operator=(const AppStreamRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AppStreamRequest &other) const;


protected:
    /// @cond internal
    explicit AppStreamRequest(AppStreamRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppStreamRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
