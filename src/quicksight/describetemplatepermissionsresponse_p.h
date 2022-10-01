// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATEPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBETEMPLATEPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplatePermissionsResponse;

class DescribeTemplatePermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeTemplatePermissionsResponsePrivate(DescribeTemplatePermissionsResponse * const q);

    void parseDescribeTemplatePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTemplatePermissionsResponse)
    Q_DISABLE_COPY(DescribeTemplatePermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
