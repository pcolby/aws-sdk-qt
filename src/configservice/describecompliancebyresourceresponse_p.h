// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPLIANCEBYRESOURCERESPONSE_P_H
#define QTAWS_DESCRIBECOMPLIANCEBYRESOURCERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeComplianceByResourceResponse;

class DescribeComplianceByResourceResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeComplianceByResourceResponsePrivate(DescribeComplianceByResourceResponse * const q);

    void parseDescribeComplianceByResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeComplianceByResourceResponse)
    Q_DISABLE_COPY(DescribeComplianceByResourceResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
