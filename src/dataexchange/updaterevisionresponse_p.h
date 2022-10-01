// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREVISIONRESPONSE_P_H
#define QTAWS_UPDATEREVISIONRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class UpdateRevisionResponse;

class UpdateRevisionResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit UpdateRevisionResponsePrivate(UpdateRevisionResponse * const q);

    void parseUpdateRevisionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRevisionResponse)
    Q_DISABLE_COPY(UpdateRevisionResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
