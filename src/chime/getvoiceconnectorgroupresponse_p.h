// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORGROUPRESPONSE_P_H
#define QTAWS_GETVOICECONNECTORGROUPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorGroupResponse;

class GetVoiceConnectorGroupResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetVoiceConnectorGroupResponsePrivate(GetVoiceConnectorGroupResponse * const q);

    void parseGetVoiceConnectorGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(GetVoiceConnectorGroupResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
