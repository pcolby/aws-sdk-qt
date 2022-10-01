// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEQUEUERESPONSE_P_H
#define SQSDELETEQUEUERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteQueueResponse;

class SqsDeleteQueueResponsePrivate : public SqsResponsePrivate {

public:
    QString queueUrl; ///< Created queue URL.

    SqsDeleteQueueResponsePrivate(SqsDeleteQueueResponse * const q);

    void parseDeleteQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsDeleteQueueResponse)
    Q_DISABLE_COPY(SqsDeleteQueueResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
