// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DescribeOrganizationResponse;

class DescribeOrganizationResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DescribeOrganizationResponsePrivate(DescribeOrganizationResponse * const q);

    void parseDescribeOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationResponse)
    Q_DISABLE_COPY(DescribeOrganizationResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
