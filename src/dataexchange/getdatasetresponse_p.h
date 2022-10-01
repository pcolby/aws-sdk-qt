// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETRESPONSE_P_H
#define QTAWS_GETDATASETRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class GetDataSetResponse;

class GetDataSetResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit GetDataSetResponsePrivate(GetDataSetResponse * const q);

    void parseGetDataSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataSetResponse)
    Q_DISABLE_COPY(GetDataSetResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
