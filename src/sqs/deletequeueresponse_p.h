// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUERESPONSE_P_H
#define QTAWS_DELETEQUEUERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class DeleteQueueResponse;

class DeleteQueueResponsePrivate : public SqsResponsePrivate {

public:

    explicit DeleteQueueResponsePrivate(DeleteQueueResponse * const q);

    void parseDeleteQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteQueueResponse)
    Q_DISABLE_COPY(DeleteQueueResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
