// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPERATINGSYSTEMSRESPONSE_P_H
#define QTAWS_DESCRIBEOPERATINGSYSTEMSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeOperatingSystemsResponse;

class DescribeOperatingSystemsResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeOperatingSystemsResponsePrivate(DescribeOperatingSystemsResponse * const q);

    void parseDescribeOperatingSystemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOperatingSystemsResponse)
    Q_DISABLE_COPY(DescribeOperatingSystemsResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
