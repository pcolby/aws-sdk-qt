// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONHEALTHRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONHEALTHRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationHealthResponse;

class DescribeOrganizationHealthResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeOrganizationHealthResponsePrivate(DescribeOrganizationHealthResponse * const q);

    void parseDescribeOrganizationHealthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationHealthResponse)
    Q_DISABLE_COPY(DescribeOrganizationHealthResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
