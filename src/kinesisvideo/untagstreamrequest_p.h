// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSTREAMREQUEST_P_H
#define QTAWS_UNTAGSTREAMREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "untagstreamrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UntagStreamRequest;

class UntagStreamRequestPrivate : public KinesisVideoRequestPrivate {

public:
    UntagStreamRequestPrivate(const KinesisVideoRequest::Action action,
                                   UntagStreamRequest * const q);
    UntagStreamRequestPrivate(const UntagStreamRequestPrivate &other,
                                   UntagStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
