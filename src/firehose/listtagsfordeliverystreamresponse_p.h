// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORDELIVERYSTREAMRESPONSE_P_H
#define QTAWS_LISTTAGSFORDELIVERYSTREAMRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class ListTagsForDeliveryStreamResponse;

class ListTagsForDeliveryStreamResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit ListTagsForDeliveryStreamResponsePrivate(ListTagsForDeliveryStreamResponse * const q);

    void parseListTagsForDeliveryStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForDeliveryStreamResponse)
    Q_DISABLE_COPY(ListTagsForDeliveryStreamResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif
