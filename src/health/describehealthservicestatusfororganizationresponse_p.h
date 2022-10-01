// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHEALTHSERVICESTATUSFORORGANIZATIONRESPONSE_P_H
#define QTAWS_DESCRIBEHEALTHSERVICESTATUSFORORGANIZATIONRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class DescribeHealthServiceStatusForOrganizationResponse;

class DescribeHealthServiceStatusForOrganizationResponsePrivate : public HealthResponsePrivate {

public:

    explicit DescribeHealthServiceStatusForOrganizationResponsePrivate(DescribeHealthServiceStatusForOrganizationResponse * const q);

    void parseDescribeHealthServiceStatusForOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHealthServiceStatusForOrganizationResponse)
    Q_DISABLE_COPY(DescribeHealthServiceStatusForOrganizationResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
