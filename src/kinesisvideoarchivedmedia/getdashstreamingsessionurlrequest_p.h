// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHSTREAMINGSESSIONURLREQUEST_P_H
#define QTAWS_GETDASHSTREAMINGSESSIONURLREQUEST_P_H

#include "kinesisvideoarchivedmediarequest_p.h"
#include "getdashstreamingsessionurlrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetDASHStreamingSessionURLRequest;

class GetDASHStreamingSessionURLRequestPrivate : public KinesisVideoArchivedMediaRequestPrivate {

public:
    GetDASHStreamingSessionURLRequestPrivate(const KinesisVideoArchivedMediaRequest::Action action,
                                   GetDASHStreamingSessionURLRequest * const q);
    GetDASHStreamingSessionURLRequestPrivate(const GetDASHStreamingSessionURLRequestPrivate &other,
                                   GetDASHStreamingSessionURLRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDASHStreamingSessionURLRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
