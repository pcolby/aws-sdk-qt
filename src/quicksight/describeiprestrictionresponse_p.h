// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPRESTRICTIONRESPONSE_P_H
#define QTAWS_DESCRIBEIPRESTRICTIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeIpRestrictionResponse;

class DescribeIpRestrictionResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeIpRestrictionResponsePrivate(DescribeIpRestrictionResponse * const q);

    void parseDescribeIpRestrictionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIpRestrictionResponse)
    Q_DISABLE_COPY(DescribeIpRestrictionResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
