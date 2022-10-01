// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTERCONNECTRESPONSE_P_H
#define QTAWS_CREATEINTERCONNECTRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class CreateInterconnectResponse;

class CreateInterconnectResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit CreateInterconnectResponsePrivate(CreateInterconnectResponse * const q);

    void parseCreateInterconnectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInterconnectResponse)
    Q_DISABLE_COPY(CreateInterconnectResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
