// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTPOSTSREQUEST_P_H
#define QTAWS_LISTOUTPOSTSREQUEST_P_H

#include "outpostsrequest_p.h"
#include "listoutpostsrequest.h"

namespace QtAws {
namespace Outposts {

class ListOutpostsRequest;

class ListOutpostsRequestPrivate : public OutpostsRequestPrivate {

public:
    ListOutpostsRequestPrivate(const OutpostsRequest::Action action,
                                   ListOutpostsRequest * const q);
    ListOutpostsRequestPrivate(const ListOutpostsRequestPrivate &other,
                                   ListOutpostsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOutpostsRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
