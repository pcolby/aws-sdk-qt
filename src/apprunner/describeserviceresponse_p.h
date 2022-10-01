// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICERESPONSE_P_H
#define QTAWS_DESCRIBESERVICERESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class DescribeServiceResponse;

class DescribeServiceResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit DescribeServiceResponsePrivate(DescribeServiceResponse * const q);

    void parseDescribeServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServiceResponse)
    Q_DISABLE_COPY(DescribeServiceResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
