// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTORPROXYRESPONSE_P_H
#define QTAWS_GETVOICECONNECTORPROXYRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorProxyResponse;

class GetVoiceConnectorProxyResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetVoiceConnectorProxyResponsePrivate(GetVoiceConnectorProxyResponse * const q);

    void parseGetVoiceConnectorProxyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorProxyResponse)
    Q_DISABLE_COPY(GetVoiceConnectorProxyResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
