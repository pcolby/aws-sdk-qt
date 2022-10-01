// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSTREAMCONSUMERREQUEST_P_H
#define QTAWS_REGISTERSTREAMCONSUMERREQUEST_P_H

#include "kinesisrequest_p.h"
#include "registerstreamconsumerrequest.h"

namespace QtAws {
namespace Kinesis {

class RegisterStreamConsumerRequest;

class RegisterStreamConsumerRequestPrivate : public KinesisRequestPrivate {

public:
    RegisterStreamConsumerRequestPrivate(const KinesisRequest::Action action,
                                   RegisterStreamConsumerRequest * const q);
    RegisterStreamConsumerRequestPrivate(const RegisterStreamConsumerRequestPrivate &other,
                                   RegisterStreamConsumerRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterStreamConsumerRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
