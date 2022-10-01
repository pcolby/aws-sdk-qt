// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORSTREAMREQUEST_P_H
#define QTAWS_LISTTAGSFORSTREAMREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "listtagsforstreamrequest.h"

namespace QtAws {
namespace KinesisVideo {

class ListTagsForStreamRequest;

class ListTagsForStreamRequestPrivate : public KinesisVideoRequestPrivate {

public:
    ListTagsForStreamRequestPrivate(const KinesisVideoRequest::Action action,
                                   ListTagsForStreamRequest * const q);
    ListTagsForStreamRequestPrivate(const ListTagsForStreamRequestPrivate &other,
                                   ListTagsForStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
