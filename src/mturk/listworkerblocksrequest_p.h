// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERBLOCKSREQUEST_P_H
#define QTAWS_LISTWORKERBLOCKSREQUEST_P_H

#include "mturkrequest_p.h"
#include "listworkerblocksrequest.h"

namespace QtAws {
namespace MTurk {

class ListWorkerBlocksRequest;

class ListWorkerBlocksRequestPrivate : public MTurkRequestPrivate {

public:
    ListWorkerBlocksRequestPrivate(const MTurkRequest::Action action,
                                   ListWorkerBlocksRequest * const q);
    ListWorkerBlocksRequestPrivate(const ListWorkerBlocksRequestPrivate &other,
                                   ListWorkerBlocksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkerBlocksRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
