// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGDELIVERYSTREAMRESPONSE_P_H
#define QTAWS_UNTAGDELIVERYSTREAMRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class UntagDeliveryStreamResponse;

class UntagDeliveryStreamResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit UntagDeliveryStreamResponsePrivate(UntagDeliveryStreamResponse * const q);

    void parseUntagDeliveryStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagDeliveryStreamResponse)
    Q_DISABLE_COPY(UntagDeliveryStreamResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif
