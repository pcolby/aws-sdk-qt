// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIAFORFRAGMENTLISTREQUEST_P_H
#define QTAWS_GETMEDIAFORFRAGMENTLISTREQUEST_P_H

#include "kinesisvideoarchivedmediarequest_p.h"
#include "getmediaforfragmentlistrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetMediaForFragmentListRequest;

class GetMediaForFragmentListRequestPrivate : public KinesisVideoArchivedMediaRequestPrivate {

public:
    GetMediaForFragmentListRequestPrivate(const KinesisVideoArchivedMediaRequest::Action action,
                                   GetMediaForFragmentListRequest * const q);
    GetMediaForFragmentListRequestPrivate(const GetMediaForFragmentListRequestPrivate &other,
                                   GetMediaForFragmentListRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMediaForFragmentListRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
