// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTACTIONRESPONSE_P_H
#define QTAWS_GETEVENTACTIONRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class GetEventActionResponse;

class GetEventActionResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit GetEventActionResponsePrivate(GetEventActionResponse * const q);

    void parseGetEventActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventActionResponse)
    Q_DISABLE_COPY(GetEventActionResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
