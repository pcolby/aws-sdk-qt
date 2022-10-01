// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMREQUEST_P_H
#define QTAWS_DELETESTREAMREQUEST_P_H

#include "kinesisrequest_p.h"
#include "deletestreamrequest.h"

namespace QtAws {
namespace Kinesis {

class DeleteStreamRequest;

class DeleteStreamRequestPrivate : public KinesisRequestPrivate {

public:
    DeleteStreamRequestPrivate(const KinesisRequest::Action action,
                                   DeleteStreamRequest * const q);
    DeleteStreamRequestPrivate(const DeleteStreamRequestPrivate &other,
                                   DeleteStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStreamRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
