// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOMATCHSETSREQUEST_P_H
#define QTAWS_LISTGEOMATCHSETSREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listgeomatchsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListGeoMatchSetsRequest;

class ListGeoMatchSetsRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListGeoMatchSetsRequestPrivate(const WafRegionalRequest::Action action,
                                   ListGeoMatchSetsRequest * const q);
    ListGeoMatchSetsRequestPrivate(const ListGeoMatchSetsRequestPrivate &other,
                                   ListGeoMatchSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGeoMatchSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
