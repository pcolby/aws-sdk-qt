// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXCLUSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEEXCLUSIONSRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DescribeExclusionsResponse;

class DescribeExclusionsResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DescribeExclusionsResponsePrivate(DescribeExclusionsResponse * const q);

    void parseDescribeExclusionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExclusionsResponse)
    Q_DISABLE_COPY(DescribeExclusionsResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
