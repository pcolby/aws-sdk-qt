// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESERVEDNODEEXCHANGERESPONSE_P_H
#define QTAWS_ACCEPTRESERVEDNODEEXCHANGERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class AcceptReservedNodeExchangeResponse;

class AcceptReservedNodeExchangeResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit AcceptReservedNodeExchangeResponsePrivate(AcceptReservedNodeExchangeResponse * const q);

    void parseAcceptReservedNodeExchangeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptReservedNodeExchangeResponse)
    Q_DISABLE_COPY(AcceptReservedNodeExchangeResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
