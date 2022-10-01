// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTXSSMATCHSETSREQUEST_P_H
#define QTAWS_LISTXSSMATCHSETSREQUEST_P_H

#include "wafrequest_p.h"
#include "listxssmatchsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListXssMatchSetsRequest;

class ListXssMatchSetsRequestPrivate : public WafRequestPrivate {

public:
    ListXssMatchSetsRequestPrivate(const WafRequest::Action action,
                                   ListXssMatchSetsRequest * const q);
    ListXssMatchSetsRequestPrivate(const ListXssMatchSetsRequestPrivate &other,
                                   ListXssMatchSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListXssMatchSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
