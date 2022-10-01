// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEINTEGRATIONRESPONSE_P_H
#define QTAWS_DESCRIBESERVICEINTEGRATIONRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeServiceIntegrationResponse;

class DescribeServiceIntegrationResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeServiceIntegrationResponsePrivate(DescribeServiceIntegrationResponse * const q);

    void parseDescribeServiceIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServiceIntegrationResponse)
    Q_DISABLE_COPY(DescribeServiceIntegrationResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
