// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDQUERYRESPONSE_P_H
#define QTAWS_CREATESCHEDULEDQUERYRESPONSE_P_H

#include "timestreamqueryresponse_p.h"

namespace QtAws {
namespace TimestreamQuery {

class CreateScheduledQueryResponse;

class CreateScheduledQueryResponsePrivate : public TimestreamQueryResponsePrivate {

public:

    explicit CreateScheduledQueryResponsePrivate(CreateScheduledQueryResponse * const q);

    void parseCreateScheduledQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateScheduledQueryResponse)
    Q_DISABLE_COPY(CreateScheduledQueryResponsePrivate)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
