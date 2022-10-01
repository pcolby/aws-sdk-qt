// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECONNECTORRESPONSE_P_H
#define QTAWS_UPDATEVOICECONNECTORRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateVoiceConnectorResponse;

class UpdateVoiceConnectorResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateVoiceConnectorResponsePrivate(UpdateVoiceConnectorResponse * const q);

    void parseUpdateVoiceConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVoiceConnectorResponse)
    Q_DISABLE_COPY(UpdateVoiceConnectorResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
