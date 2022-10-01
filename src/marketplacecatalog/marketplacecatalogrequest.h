// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECATALOGREQUEST_H
#define QTAWS_MARKETPLACECATALOGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmarketplacecatalogglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MarketplaceCatalog {

class MarketplaceCatalogRequestPrivate;

class QTAWSMARKETPLACECATALOG_EXPORT MarketplaceCatalogRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MarketplaceCatalog.
    enum Action {
        CancelChangeSetAction,
        DescribeChangeSetAction,
        DescribeEntityAction,
        ListChangeSetsAction,
        ListEntitiesAction,
        StartChangeSetAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MarketplaceCatalogRequest(const Action action);
    MarketplaceCatalogRequest(const MarketplaceCatalogRequest &other);
    MarketplaceCatalogRequest &operator=(const MarketplaceCatalogRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MarketplaceCatalogRequest &other) const;


protected:
    /// @cond internal
    explicit MarketplaceCatalogRequest(MarketplaceCatalogRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MarketplaceCatalogRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
