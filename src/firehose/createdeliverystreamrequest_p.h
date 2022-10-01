// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERYSTREAMREQUEST_P_H
#define QTAWS_CREATEDELIVERYSTREAMREQUEST_P_H

#include "firehoserequest_p.h"
#include "createdeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class CreateDeliveryStreamRequest;

class CreateDeliveryStreamRequestPrivate : public FirehoseRequestPrivate {

public:
    CreateDeliveryStreamRequestPrivate(const FirehoseRequest::Action action,
                                   CreateDeliveryStreamRequest * const q);
    CreateDeliveryStreamRequestPrivate(const CreateDeliveryStreamRequestPrivate &other,
                                   CreateDeliveryStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
