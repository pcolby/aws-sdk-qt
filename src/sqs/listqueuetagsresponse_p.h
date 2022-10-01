// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUETAGSRESPONSE_P_H
#define QTAWS_LISTQUEUETAGSRESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace Sqs {

class ListQueueTagsResponse;

class ListQueueTagsResponsePrivate : public SqsResponsePrivate {

public:

    explicit ListQueueTagsResponsePrivate(ListQueueTagsResponse * const q);

    void parseListQueueTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQueueTagsResponse)
    Q_DISABLE_COPY(ListQueueTagsResponsePrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
