// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMENCRYPTIONREQUEST_P_H
#define QTAWS_STOPSTREAMENCRYPTIONREQUEST_P_H

#include "kinesisrequest_p.h"
#include "stopstreamencryptionrequest.h"

namespace QtAws {
namespace Kinesis {

class StopStreamEncryptionRequest;

class StopStreamEncryptionRequestPrivate : public KinesisRequestPrivate {

public:
    StopStreamEncryptionRequestPrivate(const KinesisRequest::Action action,
                                   StopStreamEncryptionRequest * const q);
    StopStreamEncryptionRequestPrivate(const StopStreamEncryptionRequestPrivate &other,
                                   StopStreamEncryptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopStreamEncryptionRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
