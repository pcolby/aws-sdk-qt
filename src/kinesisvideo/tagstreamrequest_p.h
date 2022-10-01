// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSTREAMREQUEST_P_H
#define QTAWS_TAGSTREAMREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "tagstreamrequest.h"

namespace QtAws {
namespace KinesisVideo {

class TagStreamRequest;

class TagStreamRequestPrivate : public KinesisVideoRequestPrivate {

public:
    TagStreamRequestPrivate(const KinesisVideoRequest::Action action,
                                   TagStreamRequest * const q);
    TagStreamRequestPrivate(const TagStreamRequestPrivate &other,
                                   TagStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
