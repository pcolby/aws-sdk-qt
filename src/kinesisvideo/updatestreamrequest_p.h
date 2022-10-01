// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMREQUEST_P_H
#define QTAWS_UPDATESTREAMREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "updatestreamrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateStreamRequest;

class UpdateStreamRequestPrivate : public KinesisVideoRequestPrivate {

public:
    UpdateStreamRequestPrivate(const KinesisVideoRequest::Action action,
                                   UpdateStreamRequest * const q);
    UpdateStreamRequestPrivate(const UpdateStreamRequestPrivate &other,
                                   UpdateStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
