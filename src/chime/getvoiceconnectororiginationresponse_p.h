// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORORIGINATIONRESPONSE_P_H
#define QTAWS_GETVOICECONNECTORORIGINATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorOriginationResponse;

class GetVoiceConnectorOriginationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetVoiceConnectorOriginationResponsePrivate(GetVoiceConnectorOriginationResponse * const q);

    void parseGetVoiceConnectorOriginationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorOriginationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorOriginationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
