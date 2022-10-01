// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTSRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DescribeEventsResponse;

class DescribeEventsResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DescribeEventsResponsePrivate(DescribeEventsResponse * const q);

    void parseDescribeEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventsResponse)
    Q_DISABLE_COPY(DescribeEventsResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
