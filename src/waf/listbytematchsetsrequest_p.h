// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBYTEMATCHSETSREQUEST_P_H
#define QTAWS_LISTBYTEMATCHSETSREQUEST_P_H

#include "wafrequest_p.h"
#include "listbytematchsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListByteMatchSetsRequest;

class ListByteMatchSetsRequestPrivate : public WafRequestPrivate {

public:
    ListByteMatchSetsRequestPrivate(const WafRequest::Action action,
                                   ListByteMatchSetsRequest * const q);
    ListByteMatchSetsRequestPrivate(const ListByteMatchSetsRequestPrivate &other,
                                   ListByteMatchSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListByteMatchSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
