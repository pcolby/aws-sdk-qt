// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBLOGITEMSRESPONSE_P_H
#define QTAWS_DESCRIBEJOBLOGITEMSRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DescribeJobLogItemsResponse;

class DescribeJobLogItemsResponsePrivate : public DrsResponsePrivate {

public:

    explicit DescribeJobLogItemsResponsePrivate(DescribeJobLogItemsResponse * const q);

    void parseDescribeJobLogItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobLogItemsResponse)
    Q_DISABLE_COPY(DescribeJobLogItemsResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
