// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREVISIONRESPONSE_P_H
#define QTAWS_DELETEREVISIONRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class DeleteRevisionResponse;

class DeleteRevisionResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit DeleteRevisionResponsePrivate(DeleteRevisionResponse * const q);

    void parseDeleteRevisionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRevisionResponse)
    Q_DISABLE_COPY(DeleteRevisionResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
