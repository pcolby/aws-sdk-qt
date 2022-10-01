// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREVISIONRESPONSE_P_H
#define QTAWS_CREATEREVISIONRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class CreateRevisionResponse;

class CreateRevisionResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit CreateRevisionResponsePrivate(CreateRevisionResponse * const q);

    void parseCreateRevisionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRevisionResponse)
    Q_DISABLE_COPY(CreateRevisionResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
