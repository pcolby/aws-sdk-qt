// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDENTITIESRESPONSE_P_H
#define QTAWS_DESCRIBEAFFECTEDENTITIESRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class DescribeAffectedEntitiesResponse;

class DescribeAffectedEntitiesResponsePrivate : public HealthResponsePrivate {

public:

    explicit DescribeAffectedEntitiesResponsePrivate(DescribeAffectedEntitiesResponse * const q);

    void parseDescribeAffectedEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAffectedEntitiesResponse)
    Q_DISABLE_COPY(DescribeAffectedEntitiesResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
