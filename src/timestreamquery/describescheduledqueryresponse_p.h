// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDQUERYRESPONSE_P_H
#define QTAWS_DESCRIBESCHEDULEDQUERYRESPONSE_P_H

#include "timestreamqueryresponse_p.h"

namespace QtAws {
namespace TimestreamQuery {

class DescribeScheduledQueryResponse;

class DescribeScheduledQueryResponsePrivate : public TimestreamQueryResponsePrivate {

public:

    explicit DescribeScheduledQueryResponsePrivate(DescribeScheduledQueryResponse * const q);

    void parseDescribeScheduledQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledQueryResponse)
    Q_DISABLE_COPY(DescribeScheduledQueryResponsePrivate)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
