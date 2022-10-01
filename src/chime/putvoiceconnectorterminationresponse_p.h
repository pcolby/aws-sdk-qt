// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORTERMINATIONRESPONSE_P_H
#define QTAWS_PUTVOICECONNECTORTERMINATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorTerminationResponse;

class PutVoiceConnectorTerminationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutVoiceConnectorTerminationResponsePrivate(PutVoiceConnectorTerminationResponse * const q);

    void parsePutVoiceConnectorTerminationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorTerminationResponse)
    Q_DISABLE_COPY(PutVoiceConnectorTerminationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
