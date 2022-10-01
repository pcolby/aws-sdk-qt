// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTORPROXYRESPONSE_P_H
#define QTAWS_PUTVOICECONNECTORPROXYRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorProxyResponse;

class PutVoiceConnectorProxyResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutVoiceConnectorProxyResponsePrivate(PutVoiceConnectorProxyResponse * const q);

    void parsePutVoiceConnectorProxyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorProxyResponse)
    Q_DISABLE_COPY(PutVoiceConnectorProxyResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
