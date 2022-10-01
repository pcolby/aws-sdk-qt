// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICECONNECTORRESPONSE_P_H
#define QTAWS_CREATEVOICECONNECTORRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateVoiceConnectorResponse;

class CreateVoiceConnectorResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateVoiceConnectorResponsePrivate(CreateVoiceConnectorResponse * const q);

    void parseCreateVoiceConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVoiceConnectorResponse)
    Q_DISABLE_COPY(CreateVoiceConnectorResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
