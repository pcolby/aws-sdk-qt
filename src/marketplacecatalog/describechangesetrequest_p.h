// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANGESETREQUEST_P_H
#define QTAWS_DESCRIBECHANGESETREQUEST_P_H

#include "marketplacecatalogrequest_p.h"
#include "describechangesetrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class DescribeChangeSetRequest;

class DescribeChangeSetRequestPrivate : public MarketplaceCatalogRequestPrivate {

public:
    DescribeChangeSetRequestPrivate(const MarketplaceCatalogRequest::Action action,
                                   DescribeChangeSetRequest * const q);
    DescribeChangeSetRequestPrivate(const DescribeChangeSetRequestPrivate &other,
                                   DescribeChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChangeSetRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
