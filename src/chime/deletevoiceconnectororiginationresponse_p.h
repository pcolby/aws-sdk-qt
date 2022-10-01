// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORORIGINATIONRESPONSE_P_H
#define QTAWS_DELETEVOICECONNECTORORIGINATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorOriginationResponse;

class DeleteVoiceConnectorOriginationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteVoiceConnectorOriginationResponsePrivate(DeleteVoiceConnectorOriginationResponse * const q);

    void parseDeleteVoiceConnectorOriginationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorOriginationResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorOriginationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
