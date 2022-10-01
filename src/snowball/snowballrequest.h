// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWBALLREQUEST_H
#define QTAWS_SNOWBALLREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssnowballglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Snowball {

class SnowballRequestPrivate;

class QTAWSSNOWBALL_EXPORT SnowballRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Snowball.
    enum Action {
        CancelClusterAction,
        CancelJobAction,
        CreateAddressAction,
        CreateClusterAction,
        CreateJobAction,
        CreateLongTermPricingAction,
        CreateReturnShippingLabelAction,
        DescribeAddressAction,
        DescribeAddressesAction,
        DescribeClusterAction,
        DescribeJobAction,
        DescribeReturnShippingLabelAction,
        GetJobManifestAction,
        GetJobUnlockCodeAction,
        GetSnowballUsageAction,
        GetSoftwareUpdatesAction,
        ListClusterJobsAction,
        ListClustersAction,
        ListCompatibleImagesAction,
        ListJobsAction,
        ListLongTermPricingAction,
        UpdateClusterAction,
        UpdateJobAction,
        UpdateJobShipmentStateAction,
        UpdateLongTermPricingAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SnowballRequest(const Action action);
    SnowballRequest(const SnowballRequest &other);
    SnowballRequest &operator=(const SnowballRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SnowballRequest &other) const;


protected:
    /// @cond internal
    explicit SnowballRequest(SnowballRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SnowballRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
