// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTERCONNECTRESPONSE_P_H
#define QTAWS_DELETEINTERCONNECTRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DeleteInterconnectResponse;

class DeleteInterconnectResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DeleteInterconnectResponsePrivate(DeleteInterconnectResponse * const q);

    void parseDeleteInterconnectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInterconnectResponse)
    Q_DISABLE_COPY(DeleteInterconnectResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
