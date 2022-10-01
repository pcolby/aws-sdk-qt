// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORSTREAMREQUEST_P_H
#define QTAWS_LISTTAGSFORSTREAMREQUEST_P_H

#include "kinesisrequest_p.h"
#include "listtagsforstreamrequest.h"

namespace QtAws {
namespace Kinesis {

class ListTagsForStreamRequest;

class ListTagsForStreamRequestPrivate : public KinesisRequestPrivate {

public:
    ListTagsForStreamRequestPrivate(const KinesisRequest::Action action,
                                   ListTagsForStreamRequest * const q);
    ListTagsForStreamRequestPrivate(const ListTagsForStreamRequestPrivate &other,
                                   ListTagsForStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForStreamRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
