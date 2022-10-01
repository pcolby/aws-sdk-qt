// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURGEQUEUERESPONSE_P_H
#define QTAWS_PURGEQUEUERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class PurgeQueueResponse;

class PurgeQueueResponsePrivate : public SqsResponsePrivate {

public:

    explicit PurgeQueueResponsePrivate(PurgeQueueResponse * const q);

    void parsePurgeQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurgeQueueResponse)
    Q_DISABLE_COPY(PurgeQueueResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
