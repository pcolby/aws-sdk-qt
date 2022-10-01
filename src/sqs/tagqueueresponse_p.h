// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGQUEUERESPONSE_P_H
#define QTAWS_TAGQUEUERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class TagQueueResponse;

class TagQueueResponsePrivate : public SqsResponsePrivate {

public:

    explicit TagQueueResponsePrivate(TagQueueResponse * const q);

    void parseTagQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagQueueResponse)
    Q_DISABLE_COPY(TagQueueResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
