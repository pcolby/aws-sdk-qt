// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHLSSTREAMINGSESSIONURLREQUEST_P_H
#define QTAWS_GETHLSSTREAMINGSESSIONURLREQUEST_P_H

#include "kinesisvideoarchivedmediarequest_p.h"
#include "gethlsstreamingsessionurlrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetHLSStreamingSessionURLRequest;

class GetHLSStreamingSessionURLRequestPrivate : public KinesisVideoArchivedMediaRequestPrivate {

public:
    GetHLSStreamingSessionURLRequestPrivate(const KinesisVideoArchivedMediaRequest::Action action,
                                   GetHLSStreamingSessionURLRequest * const q);
    GetHLSStreamingSessionURLRequestPrivate(const GetHLSStreamingSessionURLRequestPrivate &other,
                                   GetHLSStreamingSessionURLRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHLSStreamingSessionURLRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
