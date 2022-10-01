// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYREQUEST_P_H
#define QTAWS_DESCRIBEENTITYREQUEST_P_H

#include "marketplacecatalogrequest_p.h"
#include "describeentityrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class DescribeEntityRequest;

class DescribeEntityRequestPrivate : public MarketplaceCatalogRequestPrivate {

public:
    DescribeEntityRequestPrivate(const MarketplaceCatalogRequest::Action action,
                                   DescribeEntityRequest * const q);
    DescribeEntityRequestPrivate(const DescribeEntityRequestPrivate &other,
                                   DescribeEntityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEntityRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
