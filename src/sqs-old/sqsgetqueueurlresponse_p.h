// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSGETQUEUEURLRESPONSE_P_H
#define SQSGETQUEUEURLRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsGetQueueUrlResponse;

class SqsGetQueueUrlResponsePrivate : public SqsResponsePrivate {

public:
    SqsGetQueueUrlResponsePrivate(SqsGetQueueUrlResponse * const q);

    void parseGetQueueUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsGetQueueUrlResponse)
    Q_DISABLE_COPY(SqsGetQueueUrlResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
