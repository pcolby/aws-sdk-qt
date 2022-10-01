// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMENCRYPTIONRESPONSE_P_H
#define QTAWS_STARTSTREAMENCRYPTIONRESPONSE_P_H

#include "kinesisresponse_p.h"

namespace QtAws {
namespace Kinesis {

class StartStreamEncryptionResponse;

class StartStreamEncryptionResponsePrivate : public KinesisResponsePrivate {

public:

    explicit StartStreamEncryptionResponsePrivate(StartStreamEncryptionResponse * const q);

    void parseStartStreamEncryptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartStreamEncryptionResponse)
    Q_DISABLE_COPY(StartStreamEncryptionResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
