// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICECONNECTORGROUPRESPONSE_P_H
#define QTAWS_CREATEVOICECONNECTORGROUPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateVoiceConnectorGroupResponse;

class CreateVoiceConnectorGroupResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateVoiceConnectorGroupResponsePrivate(CreateVoiceConnectorGroupResponse * const q);

    void parseCreateVoiceConnectorGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(CreateVoiceConnectorGroupResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
