// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDQUERYRESPONSE_P_H
#define QTAWS_DELETESCHEDULEDQUERYRESPONSE_P_H

#include "timestreamqueryresponse_p.h"

namespace QtAws {
namespace TimestreamQuery {

class DeleteScheduledQueryResponse;

class DeleteScheduledQueryResponsePrivate : public TimestreamQueryResponsePrivate {

public:

    explicit DeleteScheduledQueryResponsePrivate(DeleteScheduledQueryResponse * const q);

    void parseDeleteScheduledQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScheduledQueryResponse)
    Q_DISABLE_COPY(DeleteScheduledQueryResponsePrivate)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
