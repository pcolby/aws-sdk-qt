// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYRESPONSE_P_H
#define QTAWS_QUERYRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class QueryResponse;

class QueryResponsePrivate : public KendraResponsePrivate {

public:

    explicit QueryResponsePrivate(QueryResponse * const q);

    void parseQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QueryResponse)
    Q_DISABLE_COPY(QueryResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
