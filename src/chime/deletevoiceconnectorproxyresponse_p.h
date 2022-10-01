// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORPROXYRESPONSE_P_H
#define QTAWS_DELETEVOICECONNECTORPROXYRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorProxyResponse;

class DeleteVoiceConnectorProxyResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteVoiceConnectorProxyResponsePrivate(DeleteVoiceConnectorProxyResponse * const q);

    void parseDeleteVoiceConnectorProxyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorProxyResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorProxyResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
