// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEREVISIONRESPONSE_P_H
#define QTAWS_REVOKEREVISIONRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class RevokeRevisionResponse;

class RevokeRevisionResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit RevokeRevisionResponsePrivate(RevokeRevisionResponse * const q);

    void parseRevokeRevisionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeRevisionResponse)
    Q_DISABLE_COPY(RevokeRevisionResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
