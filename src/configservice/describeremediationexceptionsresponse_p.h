// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONEXCEPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEREMEDIATIONEXCEPTIONSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationExceptionsResponse;

class DescribeRemediationExceptionsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeRemediationExceptionsResponsePrivate(DescribeRemediationExceptionsResponse * const q);

    void parseDescribeRemediationExceptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRemediationExceptionsResponse)
    Q_DISABLE_COPY(DescribeRemediationExceptionsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
