// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETOSHARDREQUEST_P_H
#define QTAWS_SUBSCRIBETOSHARDREQUEST_P_H

#include "kinesisrequest_p.h"
#include "subscribetoshardrequest.h"

namespace QtAws {
namespace Kinesis {

class SubscribeToShardRequest;

class SubscribeToShardRequestPrivate : public KinesisRequestPrivate {

public:
    SubscribeToShardRequestPrivate(const KinesisRequest::Action action,
                                   SubscribeToShardRequest * const q);
    SubscribeToShardRequestPrivate(const SubscribeToShardRequestPrivate &other,
                                   SubscribeToShardRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubscribeToShardRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
