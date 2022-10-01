// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORORIGINATIONRESPONSE_P_H
#define QTAWS_PUTVOICECONNECTORORIGINATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorOriginationResponse;

class PutVoiceConnectorOriginationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutVoiceConnectorOriginationResponsePrivate(PutVoiceConnectorOriginationResponse * const q);

    void parsePutVoiceConnectorOriginationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorOriginationResponse)
    Q_DISABLE_COPY(PutVoiceConnectorOriginationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
