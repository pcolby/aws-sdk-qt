// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULEDQUERYRESPONSE_P_H
#define QTAWS_UPDATESCHEDULEDQUERYRESPONSE_P_H

#include "timestreamqueryresponse_p.h"

namespace QtAws {
namespace TimestreamQuery {

class UpdateScheduledQueryResponse;

class UpdateScheduledQueryResponsePrivate : public TimestreamQueryResponsePrivate {

public:

    explicit UpdateScheduledQueryResponsePrivate(UpdateScheduledQueryResponse * const q);

    void parseUpdateScheduledQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateScheduledQueryResponse)
    Q_DISABLE_COPY(UpdateScheduledQueryResponsePrivate)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
