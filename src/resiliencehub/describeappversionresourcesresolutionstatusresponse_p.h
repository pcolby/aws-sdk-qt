// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPVERSIONRESOURCESRESOLUTIONSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEAPPVERSIONRESOURCESRESOLUTIONSTATUSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppVersionResourcesResolutionStatusResponse;

class DescribeAppVersionResourcesResolutionStatusResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit DescribeAppVersionResourcesResolutionStatusResponsePrivate(DescribeAppVersionResourcesResolutionStatusResponse * const q);

    void parseDescribeAppVersionResourcesResolutionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppVersionResourcesResolutionStatusResponse)
    Q_DISABLE_COPY(DescribeAppVersionResourcesResolutionStatusResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
