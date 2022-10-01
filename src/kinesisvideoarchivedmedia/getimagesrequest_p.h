// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGESREQUEST_P_H
#define QTAWS_GETIMAGESREQUEST_P_H

#include "kinesisvideoarchivedmediarequest_p.h"
#include "getimagesrequest.h"

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class GetImagesRequest;

class GetImagesRequestPrivate : public KinesisVideoArchivedMediaRequestPrivate {

public:
    GetImagesRequestPrivate(const KinesisVideoArchivedMediaRequest::Action action,
                                   GetImagesRequest * const q);
    GetImagesRequestPrivate(const GetImagesRequestPrivate &other,
                                   GetImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImagesRequest)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
