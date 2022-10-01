// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEPERMISSIONSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribePermissionsResponse;

class DescribePermissionsResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribePermissionsResponsePrivate(DescribePermissionsResponse * const q);

    void parseDescribePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePermissionsResponse)
    Q_DISABLE_COPY(DescribePermissionsResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
