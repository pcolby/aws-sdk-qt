// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMENCRYPTIONREQUEST_P_H
#define QTAWS_STARTSTREAMENCRYPTIONREQUEST_P_H

#include "kinesisrequest_p.h"
#include "startstreamencryptionrequest.h"

namespace QtAws {
namespace Kinesis {

class StartStreamEncryptionRequest;

class StartStreamEncryptionRequestPrivate : public KinesisRequestPrivate {

public:
    StartStreamEncryptionRequestPrivate(const KinesisRequest::Action action,
                                   StartStreamEncryptionRequest * const q);
    StartStreamEncryptionRequestPrivate(const StartStreamEncryptionRequestPrivate &other,
                                   StartStreamEncryptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartStreamEncryptionRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
