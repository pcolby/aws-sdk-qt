// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDENTITIESFORORGANIZATIONRESPONSE_P_H
#define QTAWS_DESCRIBEAFFECTEDENTITIESFORORGANIZATIONRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class DescribeAffectedEntitiesForOrganizationResponse;

class DescribeAffectedEntitiesForOrganizationResponsePrivate : public HealthResponsePrivate {

public:

    explicit DescribeAffectedEntitiesForOrganizationResponsePrivate(DescribeAffectedEntitiesForOrganizationResponse * const q);

    void parseDescribeAffectedEntitiesForOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAffectedEntitiesForOrganizationResponse)
    Q_DISABLE_COPY(DescribeAffectedEntitiesForOrganizationResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
