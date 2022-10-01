// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORDELIVERYSTREAMREQUEST_P_H
#define QTAWS_LISTTAGSFORDELIVERYSTREAMREQUEST_P_H

#include "firehoserequest_p.h"
#include "listtagsfordeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class ListTagsForDeliveryStreamRequest;

class ListTagsForDeliveryStreamRequestPrivate : public FirehoseRequestPrivate {

public:
    ListTagsForDeliveryStreamRequestPrivate(const FirehoseRequest::Action action,
                                   ListTagsForDeliveryStreamRequest * const q);
    ListTagsForDeliveryStreamRequestPrivate(const ListTagsForDeliveryStreamRequestPrivate &other,
                                   ListTagsForDeliveryStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsForDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
