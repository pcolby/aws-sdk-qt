// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCREATEQUEUERESPONSE_P_H
#define SQSCREATEQUEUERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsCreateQueueResponse;

class SqsCreateQueueResponsePrivate : public SqsResponsePrivate {

public:
    QString queueUrl; ///< Created queue URL.

    SqsCreateQueueResponsePrivate(SqsCreateQueueResponse * const q);

    void parseCreateQueueResponse(QXmlStreamReader &xml);
    void parseCreateQueueResult(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsCreateQueueResponse)
    Q_DISABLE_COPY(SqsCreateQueueResponsePrivate)
    SqsCreateQueueResponse * const q_ptr; ///< Internal q-pointer.

};

} // namespace SqsOld
} // namespace QtAws

#endif
