// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPRESPONSE_P_H
#define QTAWS_DESCRIBEAPPRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppResponse;

class DescribeAppResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit DescribeAppResponsePrivate(DescribeAppResponse * const q);

    void parseDescribeAppResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppResponse)
    Q_DISABLE_COPY(DescribeAppResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
