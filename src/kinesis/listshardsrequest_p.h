// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHARDSREQUEST_P_H
#define QTAWS_LISTSHARDSREQUEST_P_H

#include "kinesisrequest_p.h"
#include "listshardsrequest.h"

namespace QtAws {
namespace Kinesis {

class ListShardsRequest;

class ListShardsRequestPrivate : public KinesisRequestPrivate {

public:
    ListShardsRequestPrivate(const KinesisRequest::Action action,
                                   ListShardsRequest * const q);
    ListShardsRequestPrivate(const ListShardsRequestPrivate &other,
                                   ListShardsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListShardsRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
