// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAGRESPONSE_P_H
#define QTAWS_UPDATELAGRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class UpdateLagResponse;

class UpdateLagResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit UpdateLagResponsePrivate(UpdateLagResponse * const q);

    void parseUpdateLagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLagResponse)
    Q_DISABLE_COPY(UpdateLagResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
