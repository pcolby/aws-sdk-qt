// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDELIVERYSTREAMRESPONSE_P_H
#define QTAWS_DELETEDELIVERYSTREAMRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class DeleteDeliveryStreamResponse;

class DeleteDeliveryStreamResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit DeleteDeliveryStreamResponsePrivate(DeleteDeliveryStreamResponse * const q);

    void parseDeleteDeliveryStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeliveryStreamResponse)
    Q_DISABLE_COPY(DeleteDeliveryStreamResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif
