// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGQUEUERESPONSE_P_H
#define QTAWS_UNTAGQUEUERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class UntagQueueResponse;

class UntagQueueResponsePrivate : public SqsResponsePrivate {

public:

    explicit UntagQueueResponsePrivate(UntagQueueResponse * const q);

    void parseUntagQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagQueueResponse)
    Q_DISABLE_COPY(UntagQueueResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
