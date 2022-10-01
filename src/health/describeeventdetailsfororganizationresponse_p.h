// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTDETAILSFORORGANIZATIONRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTDETAILSFORORGANIZATIONRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class DescribeEventDetailsForOrganizationResponse;

class DescribeEventDetailsForOrganizationResponsePrivate : public HealthResponsePrivate {

public:

    explicit DescribeEventDetailsForOrganizationResponsePrivate(DescribeEventDetailsForOrganizationResponse * const q);

    void parseDescribeEventDetailsForOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventDetailsForOrganizationResponse)
    Q_DISABLE_COPY(DescribeEventDetailsForOrganizationResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
