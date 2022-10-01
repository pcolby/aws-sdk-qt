// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMDOMAINSRESPONSE_P_H
#define QTAWS_DESCRIBECUSTOMDOMAINSRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class DescribeCustomDomainsResponse;

class DescribeCustomDomainsResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit DescribeCustomDomainsResponsePrivate(DescribeCustomDomainsResponse * const q);

    void parseDescribeCustomDomainsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCustomDomainsResponse)
    Q_DISABLE_COPY(DescribeCustomDomainsResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
