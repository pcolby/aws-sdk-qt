// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBRESPONSE_P_H
#define QTAWS_STARTJOBRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class StartJobResponse;

class StartJobResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit StartJobResponsePrivate(StartJobResponse * const q);

    void parseStartJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartJobResponse)
    Q_DISABLE_COPY(StartJobResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
