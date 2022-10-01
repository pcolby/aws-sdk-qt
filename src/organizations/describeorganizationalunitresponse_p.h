// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONALUNITRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONALUNITRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DescribeOrganizationalUnitResponse;

class DescribeOrganizationalUnitResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DescribeOrganizationalUnitResponsePrivate(DescribeOrganizationalUnitResponse * const q);

    void parseDescribeOrganizationalUnitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationalUnitResponse)
    Q_DISABLE_COPY(DescribeOrganizationalUnitResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
