// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDELIVERYSTREAMENCRYPTIONREQUEST_P_H
#define QTAWS_STOPDELIVERYSTREAMENCRYPTIONREQUEST_P_H

#include "firehoserequest_p.h"
#include "stopdeliverystreamencryptionrequest.h"

namespace QtAws {
namespace Firehose {

class StopDeliveryStreamEncryptionRequest;

class StopDeliveryStreamEncryptionRequestPrivate : public FirehoseRequestPrivate {

public:
    StopDeliveryStreamEncryptionRequestPrivate(const FirehoseRequest::Action action,
                                   StopDeliveryStreamEncryptionRequest * const q);
    StopDeliveryStreamEncryptionRequestPrivate(const StopDeliveryStreamEncryptionRequestPrivate &other,
                                   StopDeliveryStreamEncryptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDeliveryStreamEncryptionRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
