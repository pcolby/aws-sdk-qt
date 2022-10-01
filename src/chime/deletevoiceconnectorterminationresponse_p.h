// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORTERMINATIONRESPONSE_P_H
#define QTAWS_DELETEVOICECONNECTORTERMINATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorTerminationResponse;

class DeleteVoiceConnectorTerminationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteVoiceConnectorTerminationResponsePrivate(DeleteVoiceConnectorTerminationResponse * const q);

    void parseDeleteVoiceConnectorTerminationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorTerminationResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorTerminationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
