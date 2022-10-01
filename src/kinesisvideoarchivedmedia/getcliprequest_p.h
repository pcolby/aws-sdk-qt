// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLIPREQUEST_P_H
#define QTAWS_GETCLIPREQUEST_P_H

#include "kinesisvideoarchivedmediarequest_p.h"
#include "getcliprequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetClipRequest;

class GetClipRequestPrivate : public KinesisVideoArchivedMediaRequestPrivate {

public:
    GetClipRequestPrivate(const KinesisVideoArchivedMediaRequest::Action action,
                                   GetClipRequest * const q);
    GetClipRequestPrivate(const GetClipRequestPrivate &other,
                                   GetClipRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetClipRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
