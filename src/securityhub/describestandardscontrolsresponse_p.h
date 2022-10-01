// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTANDARDSCONTROLSRESPONSE_P_H
#define QTAWS_DESCRIBESTANDARDSCONTROLSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DescribeStandardsControlsResponse;

class DescribeStandardsControlsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DescribeStandardsControlsResponsePrivate(DescribeStandardsControlsResponse * const q);

    void parseDescribeStandardsControlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStandardsControlsResponse)
    Q_DISABLE_COPY(DescribeStandardsControlsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
