// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDELIVERYSTREAMENCRYPTIONREQUEST_P_H
#define QTAWS_STARTDELIVERYSTREAMENCRYPTIONREQUEST_P_H

#include "firehoserequest_p.h"
#include "startdeliverystreamencryptionrequest.h"

namespace QtAws {
namespace Firehose {

class StartDeliveryStreamEncryptionRequest;

class StartDeliveryStreamEncryptionRequestPrivate : public FirehoseRequestPrivate {

public:
    StartDeliveryStreamEncryptionRequestPrivate(const FirehoseRequest::Action action,
                                   StartDeliveryStreamEncryptionRequest * const q);
    StartDeliveryStreamEncryptionRequestPrivate(const StartDeliveryStreamEncryptionRequestPrivate &other,
                                   StartDeliveryStreamEncryptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDeliveryStreamEncryptionRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
