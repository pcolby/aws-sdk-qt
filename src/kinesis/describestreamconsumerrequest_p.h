// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTREAMCONSUMERREQUEST_P_H
#define QTAWS_DESCRIBESTREAMCONSUMERREQUEST_P_H

#include "kinesisrequest_p.h"
#include "describestreamconsumerrequest.h"

namespace QtAws {
namespace Kinesis {

class DescribeStreamConsumerRequest;

class DescribeStreamConsumerRequestPrivate : public KinesisRequestPrivate {

public:
    DescribeStreamConsumerRequestPrivate(const KinesisRequest::Action action,
                                   DescribeStreamConsumerRequest * const q);
    DescribeStreamConsumerRequestPrivate(const DescribeStreamConsumerRequestPrivate &other,
                                   DescribeStreamConsumerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStreamConsumerRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
