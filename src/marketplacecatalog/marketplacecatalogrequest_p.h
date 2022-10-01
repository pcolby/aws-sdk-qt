// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECATALOGREQUEST_P_H
#define QTAWS_MARKETPLACECATALOGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "marketplacecatalogrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class MarketplaceCatalogRequest;

class MarketplaceCatalogRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MarketplaceCatalogRequest::Action action; ///< MarketplaceCatalog action to be performed.
    QString apiVersion;        ///< MarketplaceCatalog API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MarketplaceCatalog request (query string) parameters. @todo?

    MarketplaceCatalogRequestPrivate(const MarketplaceCatalogRequest::Action action, MarketplaceCatalogRequest * const q);
    MarketplaceCatalogRequestPrivate(const MarketplaceCatalogRequestPrivate &other, MarketplaceCatalogRequest * const q);

    static QString toString(const MarketplaceCatalogRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MarketplaceCatalogRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
