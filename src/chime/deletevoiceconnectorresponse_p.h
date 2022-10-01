// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORRESPONSE_P_H
#define QTAWS_DELETEVOICECONNECTORRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorResponse;

class DeleteVoiceConnectorResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteVoiceConnectorResponsePrivate(DeleteVoiceConnectorResponse * const q);

    void parseDeleteVoiceConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
