// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERRESPONSE_P_H
#define QTAWS_DESCRIBEUSERRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeUserResponse;

class DescribeUserResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeUserResponsePrivate(DescribeUserResponse * const q);

    void parseDescribeUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserResponse)
    Q_DISABLE_COPY(DescribeUserResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
