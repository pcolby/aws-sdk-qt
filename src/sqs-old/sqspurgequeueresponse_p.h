// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSPURGEQUEUERESPONSE_P_H
#define SQSPURGEQUEUERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsPurgeQueueResponse;

class SqsPurgeQueueResponsePrivate : public SqsResponsePrivate {

public:
    QString queueUrl; ///< Created queue URL.

    SqsPurgeQueueResponsePrivate(SqsPurgeQueueResponse * const q);

    void parsePurgeQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsPurgeQueueResponse)
    Q_DISABLE_COPY(SqsPurgeQueueResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
