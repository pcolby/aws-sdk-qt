// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDELIVERYSTREAMENCRYPTIONRESPONSE_P_H
#define QTAWS_STARTDELIVERYSTREAMENCRYPTIONRESPONSE_P_H

#include "firehoseresponse_p.h"

namespace QtAws {
namespace Firehose {

class StartDeliveryStreamEncryptionResponse;

class StartDeliveryStreamEncryptionResponsePrivate : public FirehoseResponsePrivate {

public:

    explicit StartDeliveryStreamEncryptionResponsePrivate(StartDeliveryStreamEncryptionResponse * const q);

    void parseStartDeliveryStreamEncryptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDeliveryStreamEncryptionResponse)
    Q_DISABLE_COPY(StartDeliveryStreamEncryptionResponsePrivate)

};

} // namespace Firehose
} // namespace QtAws

#endif
