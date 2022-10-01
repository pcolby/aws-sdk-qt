// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCHANGESETREQUEST_P_H
#define QTAWS_CANCELCHANGESETREQUEST_P_H

#include "marketplacecatalogrequest_p.h"
#include "cancelchangesetrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class CancelChangeSetRequest;

class CancelChangeSetRequestPrivate : public MarketplaceCatalogRequestPrivate {

public:
    CancelChangeSetRequestPrivate(const MarketplaceCatalogRequest::Action action,
                                   CancelChangeSetRequest * const q);
    CancelChangeSetRequestPrivate(const CancelChangeSetRequestPrivate &other,
                                   CancelChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelChangeSetRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
