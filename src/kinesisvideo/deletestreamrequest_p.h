// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMREQUEST_P_H
#define QTAWS_DELETESTREAMREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "deletestreamrequest.h"

namespace QtAws {
namespace KinesisVideo {

class DeleteStreamRequest;

class DeleteStreamRequestPrivate : public KinesisVideoRequestPrivate {

public:
    DeleteStreamRequestPrivate(const KinesisVideoRequest::Action action,
                                   DeleteStreamRequest * const q);
    DeleteStreamRequestPrivate(const DeleteStreamRequestPrivate &other,
                                   DeleteStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStreamRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
