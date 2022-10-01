// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESCHEDULEDQUERYRESPONSE_P_H
#define QTAWS_EXECUTESCHEDULEDQUERYRESPONSE_P_H

#include "timestreamqueryresponse_p.h"

namespace QtAws {
namespace TimestreamQuery {

class ExecuteScheduledQueryResponse;

class ExecuteScheduledQueryResponsePrivate : public TimestreamQueryResponsePrivate {

public:

    explicit ExecuteScheduledQueryResponsePrivate(ExecuteScheduledQueryResponse * const q);

    void parseExecuteScheduledQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExecuteScheduledQueryResponse)
    Q_DISABLE_COPY(ExecuteScheduledQueryResponsePrivate)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
