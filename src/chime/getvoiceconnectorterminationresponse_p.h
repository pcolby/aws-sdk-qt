// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORTERMINATIONRESPONSE_P_H
#define QTAWS_GETVOICECONNECTORTERMINATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorTerminationResponse;

class GetVoiceConnectorTerminationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetVoiceConnectorTerminationResponsePrivate(GetVoiceConnectorTerminationResponse * const q);

    void parseGetVoiceConnectorTerminationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorTerminationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorTerminationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
