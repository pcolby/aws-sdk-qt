// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMENCRYPTIONRESPONSE_P_H
#define QTAWS_STOPSTREAMENCRYPTIONRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class StopStreamEncryptionResponse;

class StopStreamEncryptionResponsePrivate : public KinesisResponsePrivate {

public:

    explicit StopStreamEncryptionResponsePrivate(StopStreamEncryptionResponse * const q);

    void parseStopStreamEncryptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopStreamEncryptionResponse)
    Q_DISABLE_COPY(StopStreamEncryptionResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
