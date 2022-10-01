// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERYSTREAMSREQUEST_P_H
#define QTAWS_LISTDELIVERYSTREAMSREQUEST_P_H

#include "firehoserequest_p.h"
#include "listdeliverystreamsrequest.h"

namespace QtAws {
namespace Firehose {

class ListDeliveryStreamsRequest;

class ListDeliveryStreamsRequestPrivate : public FirehoseRequestPrivate {

public:
    ListDeliveryStreamsRequestPrivate(const FirehoseRequest::Action action,
                                   ListDeliveryStreamsRequest * const q);
    ListDeliveryStreamsRequestPrivate(const ListDeliveryStreamsRequestPrivate &other,
                                   ListDeliveryStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeliveryStreamsRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
