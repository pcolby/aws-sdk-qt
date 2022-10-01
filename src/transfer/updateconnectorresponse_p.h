// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORRESPONSE_P_H
#define QTAWS_UPDATECONNECTORRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class UpdateConnectorResponse;

class UpdateConnectorResponsePrivate : public TransferResponsePrivate {

public:

    explicit UpdateConnectorResponsePrivate(UpdateConnectorResponse * const q);

    void parseUpdateConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectorResponse)
    Q_DISABLE_COPY(UpdateConnectorResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
