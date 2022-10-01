// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONRESOURCECOLLECTIONHEALTHRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONRESOURCECOLLECTIONHEALTHRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationResourceCollectionHealthResponse;

class DescribeOrganizationResourceCollectionHealthResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeOrganizationResourceCollectionHealthResponsePrivate(DescribeOrganizationResourceCollectionHealthResponse * const q);

    void parseDescribeOrganizationResourceCollectionHealthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationResourceCollectionHealthResponse)
    Q_DISABLE_COPY(DescribeOrganizationResourceCollectionHealthResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
