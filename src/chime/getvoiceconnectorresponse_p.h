// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORRESPONSE_P_H
#define QTAWS_GETVOICECONNECTORRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorResponse;

class GetVoiceConnectorResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetVoiceConnectorResponsePrivate(GetVoiceConnectorResponse * const q);

    void parseGetVoiceConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorResponse)
    Q_DISABLE_COPY(GetVoiceConnectorResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
