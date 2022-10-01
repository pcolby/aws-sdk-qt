// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITYTYPERESPONSE_P_H
#define QTAWS_DESCRIBEACTIVITYTYPERESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class DescribeActivityTypeResponse;

class DescribeActivityTypeResponsePrivate : public SwfResponsePrivate {

public:

    explicit DescribeActivityTypeResponsePrivate(DescribeActivityTypeResponse * const q);

    void parseDescribeActivityTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeActivityTypeResponse)
    Q_DISABLE_COPY(DescribeActivityTypeResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
