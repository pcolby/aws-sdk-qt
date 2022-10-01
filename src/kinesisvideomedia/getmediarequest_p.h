// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDIAREQUEST_P_H
#define QTAWS_GETMEDIAREQUEST_P_H

#include "kinesisvideomediarequest_p.h"
#include "getmediarequest.h"

namespace QtAws {
namespace KinesisVideoMedia {

class GetMediaRequest;

class GetMediaRequestPrivate : public KinesisVideoMediaRequestPrivate {

public:
    GetMediaRequestPrivate(const KinesisVideoMediaRequest::Action action,
                                   GetMediaRequest * const q);
    GetMediaRequestPrivate(const GetMediaRequestPrivate &other,
                                   GetMediaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMediaRequest)

};

} // namespace KinesisVideoMedia
} // namespace QtAws

#endif
