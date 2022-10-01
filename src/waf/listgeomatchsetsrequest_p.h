// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOMATCHSETSREQUEST_P_H
#define QTAWS_LISTGEOMATCHSETSREQUEST_P_H

#include "wafrequest_p.h"
#include "listgeomatchsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListGeoMatchSetsRequest;

class ListGeoMatchSetsRequestPrivate : public WafRequestPrivate {

public:
    ListGeoMatchSetsRequestPrivate(const WafRequest::Action action,
                                   ListGeoMatchSetsRequest * const q);
    ListGeoMatchSetsRequestPrivate(const ListGeoMatchSetsRequestPrivate &other,
                                   ListGeoMatchSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGeoMatchSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
