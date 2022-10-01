// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTENTSREQUEST_P_H
#define QTAWS_LISTCONTENTSREQUEST_P_H

#include "wisdomrequest_p.h"
#include "listcontentsrequest.h"

namespace QtAws {
namespace Wisdom {

class ListContentsRequest;

class ListContentsRequestPrivate : public WisdomRequestPrivate {

public:
    ListContentsRequestPrivate(const WisdomRequest::Action action,
                                   ListContentsRequest * const q);
    ListContentsRequestPrivate(const ListContentsRequestPrivate &other,
                                   ListContentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContentsRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
