// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGEDBLOCKSREQUEST_P_H
#define QTAWS_LISTCHANGEDBLOCKSREQUEST_P_H

#include "ebsrequest_p.h"
#include "listchangedblocksrequest.h"

namespace QtAws {
namespace Ebs {

class ListChangedBlocksRequest;

class ListChangedBlocksRequestPrivate : public EbsRequestPrivate {

public:
    ListChangedBlocksRequestPrivate(const EbsRequest::Action action,
                                   ListChangedBlocksRequest * const q);
    ListChangedBlocksRequestPrivate(const ListChangedBlocksRequestPrivate &other,
                                   ListChangedBlocksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChangedBlocksRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
