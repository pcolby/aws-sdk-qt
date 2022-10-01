// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDELIVERYSTREAMENCRYPTIONRESPONSE_P_H
#define QTAWS_STOPDELIVERYSTREAMENCRYPTIONRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class StopDeliveryStreamEncryptionResponse;

class StopDeliveryStreamEncryptionResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit StopDeliveryStreamEncryptionResponsePrivate(StopDeliveryStreamEncryptionResponse * const q);

    void parseStopDeliveryStreamEncryptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopDeliveryStreamEncryptionResponse)
    Q_DISABLE_COPY(StopDeliveryStreamEncryptionResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif
