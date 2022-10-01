// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBGPPEERRESPONSE_P_H
#define QTAWS_CREATEBGPPEERRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class CreateBGPPeerResponse;

class CreateBGPPeerResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit CreateBGPPeerResponsePrivate(CreateBGPPeerResponse * const q);

    void parseCreateBGPPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBGPPeerResponse)
    Q_DISABLE_COPY(CreateBGPPeerResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
