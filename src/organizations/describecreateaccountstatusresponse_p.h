// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECREATEACCOUNTSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBECREATEACCOUNTSTATUSRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DescribeCreateAccountStatusResponse;

class DescribeCreateAccountStatusResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DescribeCreateAccountStatusResponsePrivate(DescribeCreateAccountStatusResponse * const q);

    void parseDescribeCreateAccountStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCreateAccountStatusResponse)
    Q_DISABLE_COPY(DescribeCreateAccountStatusResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
