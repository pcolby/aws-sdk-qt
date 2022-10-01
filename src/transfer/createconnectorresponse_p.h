// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORRESPONSE_P_H
#define QTAWS_CREATECONNECTORRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class CreateConnectorResponse;

class CreateConnectorResponsePrivate : public TransferResponsePrivate {

public:

    explicit CreateConnectorResponsePrivate(CreateConnectorResponse * const q);

    void parseCreateConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectorResponse)
    Q_DISABLE_COPY(CreateConnectorResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
