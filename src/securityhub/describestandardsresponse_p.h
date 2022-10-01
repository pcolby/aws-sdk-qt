// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTANDARDSRESPONSE_P_H
#define QTAWS_DESCRIBESTANDARDSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DescribeStandardsResponse;

class DescribeStandardsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DescribeStandardsResponsePrivate(DescribeStandardsResponse * const q);

    void parseDescribeStandardsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStandardsResponse)
    Q_DISABLE_COPY(DescribeStandardsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
