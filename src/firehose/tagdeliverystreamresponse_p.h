// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGDELIVERYSTREAMRESPONSE_P_H
#define QTAWS_TAGDELIVERYSTREAMRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class TagDeliveryStreamResponse;

class TagDeliveryStreamResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit TagDeliveryStreamResponsePrivate(TagDeliveryStreamResponse * const q);

    void parseTagDeliveryStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagDeliveryStreamResponse)
    Q_DISABLE_COPY(TagDeliveryStreamResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif
