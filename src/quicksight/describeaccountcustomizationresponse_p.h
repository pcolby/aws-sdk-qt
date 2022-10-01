// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTCUSTOMIZATIONRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTCUSTOMIZATIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountCustomizationResponse;

class DescribeAccountCustomizationResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeAccountCustomizationResponsePrivate(DescribeAccountCustomizationResponse * const q);

    void parseDescribeAccountCustomizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountCustomizationResponse)
    Q_DISABLE_COPY(DescribeAccountCustomizationResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
