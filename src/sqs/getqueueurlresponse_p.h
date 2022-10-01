// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUEUEURLRESPONSE_P_H
#define QTAWS_GETQUEUEURLRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class GetQueueUrlResponse;

class GetQueueUrlResponsePrivate : public SqsResponsePrivate {

public:

    explicit GetQueueUrlResponsePrivate(GetQueueUrlResponse * const q);

    void parseGetQueueUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQueueUrlResponse)
    Q_DISABLE_COPY(GetQueueUrlResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
