// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORGROUPRESPONSE_P_H
#define QTAWS_DELETEVOICECONNECTORGROUPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorGroupResponse;

class DeleteVoiceConnectorGroupResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteVoiceConnectorGroupResponsePrivate(DeleteVoiceConnectorGroupResponse * const q);

    void parseDeleteVoiceConnectorGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorGroupResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
