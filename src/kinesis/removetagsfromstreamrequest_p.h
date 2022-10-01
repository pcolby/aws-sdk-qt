// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMSTREAMREQUEST_P_H
#define QTAWS_REMOVETAGSFROMSTREAMREQUEST_P_H

#include "kinesisrequest_p.h"
#include "removetagsfromstreamrequest.h"

namespace QtAws {
namespace Kinesis {

class RemoveTagsFromStreamRequest;

class RemoveTagsFromStreamRequestPrivate : public KinesisRequestPrivate {

public:
    RemoveTagsFromStreamRequestPrivate(const KinesisRequest::Action action,
                                   RemoveTagsFromStreamRequest * const q);
    RemoveTagsFromStreamRequestPrivate(const RemoveTagsFromStreamRequestPrivate &other,
                                   RemoveTagsFromStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromStreamRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
