// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINGESTIONRESPONSE_P_H
#define QTAWS_DESCRIBEINGESTIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeIngestionResponse;

class DescribeIngestionResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeIngestionResponsePrivate(DescribeIngestionResponse * const q);

    void parseDescribeIngestionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIngestionResponse)
    Q_DISABLE_COPY(DescribeIngestionResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
