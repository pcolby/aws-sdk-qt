// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRICINGREQUEST_H
#define QTAWS_PRICINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspricingglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Pricing {

class PricingRequestPrivate;

class QTAWSPRICING_EXPORT PricingRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Pricing.
    enum Action {
        DescribeServicesAction,
        GetAttributeValuesAction,
        GetProductsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PricingRequest(const Action action);
    PricingRequest(const PricingRequest &other);
    PricingRequest &operator=(const PricingRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PricingRequest &other) const;


protected:
    /// @cond internal
    explicit PricingRequest(PricingRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PricingRequest)

};

} // namespace Pricing
} // namespace QtAws

#endif
