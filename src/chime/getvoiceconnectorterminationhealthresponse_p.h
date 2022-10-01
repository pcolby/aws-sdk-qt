// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORTERMINATIONHEALTHRESPONSE_P_H
#define QTAWS_GETVOICECONNECTORTERMINATIONHEALTHRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorTerminationHealthResponse;

class GetVoiceConnectorTerminationHealthResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetVoiceConnectorTerminationHealthResponsePrivate(GetVoiceConnectorTerminationHealthResponse * const q);

    void parseGetVoiceConnectorTerminationHealthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorTerminationHealthResponse)
    Q_DISABLE_COPY(GetVoiceConnectorTerminationHealthResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
