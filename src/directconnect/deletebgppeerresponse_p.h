// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBGPPEERRESPONSE_P_H
#define QTAWS_DELETEBGPPEERRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DeleteBGPPeerResponse;

class DeleteBGPPeerResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DeleteBGPPeerResponsePrivate(DeleteBGPPeerResponse * const q);

    void parseDeleteBGPPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBGPPeerResponse)
    Q_DISABLE_COPY(DeleteBGPPeerResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
