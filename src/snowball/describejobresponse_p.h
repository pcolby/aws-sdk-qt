// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBRESPONSE_P_H
#define QTAWS_DESCRIBEJOBRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class DescribeJobResponse;

class DescribeJobResponsePrivate : public SnowballResponsePrivate {

public:

    explicit DescribeJobResponsePrivate(DescribeJobResponse * const q);

    void parseDescribeJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobResponse)
    Q_DISABLE_COPY(DescribeJobResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
