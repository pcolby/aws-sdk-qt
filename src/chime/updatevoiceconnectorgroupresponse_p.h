// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECONNECTORGROUPRESPONSE_P_H
#define QTAWS_UPDATEVOICECONNECTORGROUPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateVoiceConnectorGroupResponse;

class UpdateVoiceConnectorGroupResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateVoiceConnectorGroupResponsePrivate(UpdateVoiceConnectorGroupResponse * const q);

    void parseUpdateVoiceConnectorGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(UpdateVoiceConnectorGroupResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
