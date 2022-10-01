// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMCONSUMERSREQUEST_P_H
#define QTAWS_LISTSTREAMCONSUMERSREQUEST_P_H

#include "kinesisrequest_p.h"
#include "liststreamconsumersrequest.h"

namespace QtAws {
namespace Kinesis {

class ListStreamConsumersRequest;

class ListStreamConsumersRequestPrivate : public KinesisRequestPrivate {

public:
    ListStreamConsumersRequestPrivate(const KinesisRequest::Action action,
                                   ListStreamConsumersRequest * const q);
    ListStreamConsumersRequestPrivate(const ListStreamConsumersRequestPrivate &other,
                                   ListStreamConsumersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStreamConsumersRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
