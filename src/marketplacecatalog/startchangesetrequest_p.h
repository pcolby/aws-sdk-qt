// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANGESETREQUEST_P_H
#define QTAWS_STARTCHANGESETREQUEST_P_H

#include "marketplacecatalogrequest_p.h"
#include "startchangesetrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class StartChangeSetRequest;

class StartChangeSetRequestPrivate : public MarketplaceCatalogRequestPrivate {

public:
    StartChangeSetRequestPrivate(const MarketplaceCatalogRequest::Action action,
                                   StartChangeSetRequest * const q);
    StartChangeSetRequestPrivate(const StartChangeSetRequestPrivate &other,
                                   StartChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartChangeSetRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
