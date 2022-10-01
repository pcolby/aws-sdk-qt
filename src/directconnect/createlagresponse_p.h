// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAGRESPONSE_P_H
#define QTAWS_CREATELAGRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class CreateLagResponse;

class CreateLagResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit CreateLagResponsePrivate(CreateLagResponse * const q);

    void parseCreateLagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLagResponse)
    Q_DISABLE_COPY(CreateLagResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
