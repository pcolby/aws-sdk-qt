// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERYSTREAMRESPONSE_P_H
#define QTAWS_CREATEDELIVERYSTREAMRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class CreateDeliveryStreamResponse;

class CreateDeliveryStreamResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit CreateDeliveryStreamResponsePrivate(CreateDeliveryStreamResponse * const q);

    void parseCreateDeliveryStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeliveryStreamResponse)
    Q_DISABLE_COPY(CreateDeliveryStreamResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif
