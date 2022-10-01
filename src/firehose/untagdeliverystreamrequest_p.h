// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGDELIVERYSTREAMREQUEST_P_H
#define QTAWS_UNTAGDELIVERYSTREAMREQUEST_P_H

#include "firehoserequest_p.h"
#include "untagdeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class UntagDeliveryStreamRequest;

class UntagDeliveryStreamRequestPrivate : public FirehoseRequestPrivate {

public:
    UntagDeliveryStreamRequestPrivate(const FirehoseRequest::Action action,
                                   UntagDeliveryStreamRequest * const q);
    UntagDeliveryStreamRequestPrivate(const UntagDeliveryStreamRequestPrivate &other,
                                   UntagDeliveryStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
