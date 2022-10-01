// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYRESULTSRESPONSE_P_H
#define QTAWS_GETQUERYRESULTSRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class GetQueryResultsResponse;

class GetQueryResultsResponsePrivate : public AthenaResponsePrivate {

public:

    explicit GetQueryResultsResponsePrivate(GetQueryResultsResponse * const q);

    void parseGetQueryResultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQueryResultsResponse)
    Q_DISABLE_COPY(GetQueryResultsResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
