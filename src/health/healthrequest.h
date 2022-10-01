// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHREQUEST_H
#define QTAWS_HEALTHREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawshealthglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Health {

class HealthRequestPrivate;

class QTAWSHEALTH_EXPORT HealthRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Health.
    enum Action {
        DescribeAffectedAccountsForOrganizationAction,
        DescribeAffectedEntitiesAction,
        DescribeAffectedEntitiesForOrganizationAction,
        DescribeEntityAggregatesAction,
        DescribeEventAggregatesAction,
        DescribeEventDetailsAction,
        DescribeEventDetailsForOrganizationAction,
        DescribeEventTypesAction,
        DescribeEventsAction,
        DescribeEventsForOrganizationAction,
        DescribeHealthServiceStatusForOrganizationAction,
        DisableHealthServiceAccessForOrganizationAction,
        EnableHealthServiceAccessForOrganizationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    HealthRequest(const Action action);
    HealthRequest(const HealthRequest &other);
    HealthRequest &operator=(const HealthRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const HealthRequest &other) const;


protected:
    /// @cond internal
    explicit HealthRequest(HealthRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(HealthRequest)

};

} // namespace Health
} // namespace QtAws

#endif
