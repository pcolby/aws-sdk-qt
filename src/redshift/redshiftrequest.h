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

#ifndef QTAWS_REDSHIFTREQUEST_H
#define QTAWS_REDSHIFTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Redshift {

class RedshiftRequestPrivate;

class QTAWS_EXPORT RedshiftRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Redshift.
    enum Action {
        AuthorizeClusterSecurityGroupIngressAction,
        AuthorizeSnapshotAccessAction,
        CopyClusterSnapshotAction,
        CreateClusterAction,
        CreateClusterParameterGroupAction,
        CreateClusterSecurityGroupAction,
        CreateClusterSnapshotAction,
        CreateClusterSubnetGroupAction,
        CreateEventSubscriptionAction,
        CreateHsmClientCertificateAction,
        CreateHsmConfigurationAction,
        CreateSnapshotCopyGrantAction,
        CreateTagsAction,
        DeleteClusterAction,
        DeleteClusterParameterGroupAction,
        DeleteClusterSecurityGroupAction,
        DeleteClusterSnapshotAction,
        DeleteClusterSubnetGroupAction,
        DeleteEventSubscriptionAction,
        DeleteHsmClientCertificateAction,
        DeleteHsmConfigurationAction,
        DeleteSnapshotCopyGrantAction,
        DeleteTagsAction,
        DescribeClusterParameterGroupsAction,
        DescribeClusterParametersAction,
        DescribeClusterSecurityGroupsAction,
        DescribeClusterSnapshotsAction,
        DescribeClusterSubnetGroupsAction,
        DescribeClusterVersionsAction,
        DescribeClustersAction,
        DescribeDefaultClusterParametersAction,
        DescribeEventCategoriesAction,
        DescribeEventSubscriptionsAction,
        DescribeEventsAction,
        DescribeHsmClientCertificatesAction,
        DescribeHsmConfigurationsAction,
        DescribeLoggingStatusAction,
        DescribeOrderableClusterOptionsAction,
        DescribeReservedNodeOfferingsAction,
        DescribeReservedNodesAction,
        DescribeResizeAction,
        DescribeSnapshotCopyGrantsAction,
        DescribeTableRestoreStatusAction,
        DescribeTagsAction,
        DisableLoggingAction,
        DisableSnapshotCopyAction,
        EnableLoggingAction,
        EnableSnapshotCopyAction,
        GetClusterCredentialsAction,
        ModifyClusterAction,
        ModifyClusterIamRolesAction,
        ModifyClusterParameterGroupAction,
        ModifyClusterSubnetGroupAction,
        ModifyEventSubscriptionAction,
        ModifySnapshotCopyRetentionPeriodAction,
        PurchaseReservedNodeOfferingAction,
        RebootClusterAction,
        ResetClusterParameterGroupAction,
        RestoreFromClusterSnapshotAction,
        RestoreTableFromClusterSnapshotAction,
        RevokeClusterSecurityGroupIngressAction,
        RevokeSnapshotAccessAction,
        RotateEncryptionKeyAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RedshiftRequest(const Action action);
    RedshiftRequest(const RedshiftRequest &other);
    RedshiftRequest &operator=(const RedshiftRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RedshiftRequest &other) const;


protected:
    /// @cond internal
    RedshiftRequest(RedshiftRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(RedshiftRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
