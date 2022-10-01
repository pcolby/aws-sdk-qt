// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERSTREAMCONSUMERREQUEST_P_H
#define QTAWS_DEREGISTERSTREAMCONSUMERREQUEST_P_H

#include "kinesisrequest_p.h"
#include "deregisterstreamconsumerrequest.h"

namespace QtAws {
namespace Kinesis {

class DeregisterStreamConsumerRequest;

class DeregisterStreamConsumerRequestPrivate : public KinesisRequestPrivate {

public:
    DeregisterStreamConsumerRequestPrivate(const KinesisRequest::Action action,
                                   DeregisterStreamConsumerRequest * const q);
    DeregisterStreamConsumerRequestPrivate(const DeregisterStreamConsumerRequestPrivate &other,
                                   DeregisterStreamConsumerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterStreamConsumerRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
