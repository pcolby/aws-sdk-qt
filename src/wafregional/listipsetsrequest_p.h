// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPSETSREQUEST_P_H
#define QTAWS_LISTIPSETSREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listipsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListIPSetsRequest;

class ListIPSetsRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListIPSetsRequestPrivate(const WafRegionalRequest::Action action,
                                   ListIPSetsRequest * const q);
    ListIPSetsRequestPrivate(const ListIPSetsRequestPrivate &other,
                                   ListIPSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIPSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
