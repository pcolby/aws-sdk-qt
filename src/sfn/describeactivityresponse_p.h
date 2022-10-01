// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITYRESPONSE_P_H
#define QTAWS_DESCRIBEACTIVITYRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class DescribeActivityResponse;

class DescribeActivityResponsePrivate : public SfnResponsePrivate {

public:

    explicit DescribeActivityResponsePrivate(DescribeActivityResponse * const q);

    void parseDescribeActivityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeActivityResponse)
    Q_DISABLE_COPY(DescribeActivityResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
