// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMREQUEST_P_H
#define QTAWS_CREATESTREAMREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "createstreamrequest.h"

namespace QtAws {
namespace KinesisVideo {

class CreateStreamRequest;

class CreateStreamRequestPrivate : public KinesisVideoRequestPrivate {

public:
    CreateStreamRequestPrivate(const KinesisVideoRequest::Action action,
                                   CreateStreamRequest * const q);
    CreateStreamRequestPrivate(const CreateStreamRequestPrivate &other,
                                   CreateStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
