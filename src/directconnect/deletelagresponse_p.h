// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAGRESPONSE_P_H
#define QTAWS_DELETELAGRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DeleteLagResponse;

class DeleteLagResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DeleteLagResponsePrivate(DeleteLagResponse * const q);

    void parseDeleteLagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLagResponse)
    Q_DISABLE_COPY(DeleteLagResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
