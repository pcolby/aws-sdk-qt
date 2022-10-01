// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGDELIVERYSTREAMREQUEST_P_H
#define QTAWS_TAGDELIVERYSTREAMREQUEST_P_H

#include "firehoserequest_p.h"
#include "tagdeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class TagDeliveryStreamRequest;

class TagDeliveryStreamRequestPrivate : public FirehoseRequestPrivate {

public:
    TagDeliveryStreamRequestPrivate(const FirehoseRequest::Action action,
                                   TagDeliveryStreamRequest * const q);
    TagDeliveryStreamRequestPrivate(const TagDeliveryStreamRequestPrivate &other,
                                   TagDeliveryStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
