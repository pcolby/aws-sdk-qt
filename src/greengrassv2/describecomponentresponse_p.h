// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTRESPONSE_P_H
#define QTAWS_DESCRIBECOMPONENTRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class DescribeComponentResponse;

class DescribeComponentResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit DescribeComponentResponsePrivate(DescribeComponentResponse * const q);

    void parseDescribeComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeComponentResponse)
    Q_DISABLE_COPY(DescribeComponentResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
