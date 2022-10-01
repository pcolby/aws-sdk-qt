// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTACTIONRESPONSE_P_H
#define QTAWS_UPDATEEVENTACTIONRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class UpdateEventActionResponse;

class UpdateEventActionResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit UpdateEventActionResponsePrivate(UpdateEventActionResponse * const q);

    void parseUpdateEventActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEventActionResponse)
    Q_DISABLE_COPY(UpdateEventActionResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
