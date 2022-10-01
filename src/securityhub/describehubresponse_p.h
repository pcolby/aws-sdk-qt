// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUBRESPONSE_P_H
#define QTAWS_DESCRIBEHUBRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DescribeHubResponse;

class DescribeHubResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DescribeHubResponsePrivate(DescribeHubResponse * const q);

    void parseDescribeHubResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHubResponse)
    Q_DISABLE_COPY(DescribeHubResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
