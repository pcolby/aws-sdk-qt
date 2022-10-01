// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULEDQUERIESRESPONSE_P_H
#define QTAWS_LISTSCHEDULEDQUERIESRESPONSE_P_H

#include "timestreamqueryresponse_p.h"

namespace QtAws {
namespace TimestreamQuery {

class ListScheduledQueriesResponse;

class ListScheduledQueriesResponsePrivate : public TimestreamQueryResponsePrivate {

public:

    explicit ListScheduledQueriesResponsePrivate(ListScheduledQueriesResponse * const q);

    void parseListScheduledQueriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListScheduledQueriesResponse)
    Q_DISABLE_COPY(ListScheduledQueriesResponsePrivate)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
