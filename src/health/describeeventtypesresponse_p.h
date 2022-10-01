// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTYPESRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTTYPESRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class DescribeEventTypesResponse;

class DescribeEventTypesResponsePrivate : public HealthResponsePrivate {

public:

    explicit DescribeEventTypesResponsePrivate(DescribeEventTypesResponse * const q);

    void parseDescribeEventTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventTypesResponse)
    Q_DISABLE_COPY(DescribeEventTypesResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
