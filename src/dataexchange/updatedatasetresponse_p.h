// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETRESPONSE_P_H
#define QTAWS_UPDATEDATASETRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class UpdateDataSetResponse;

class UpdateDataSetResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit UpdateDataSetResponsePrivate(UpdateDataSetResponse * const q);

    void parseUpdateDataSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataSetResponse)
    Q_DISABLE_COPY(UpdateDataSetResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
