// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDELIVERYSTREAMREQUEST_P_H
#define QTAWS_DELETEDELIVERYSTREAMREQUEST_P_H

#include "firehoserequest_p.h"
#include "deletedeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class DeleteDeliveryStreamRequest;

class DeleteDeliveryStreamRequestPrivate : public FirehoseRequestPrivate {

public:
    DeleteDeliveryStreamRequestPrivate(const FirehoseRequest::Action action,
                                   DeleteDeliveryStreamRequest * const q);
    DeleteDeliveryStreamRequestPrivate(const DeleteDeliveryStreamRequestPrivate &other,
                                   DeleteDeliveryStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
