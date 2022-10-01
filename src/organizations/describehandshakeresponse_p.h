// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHANDSHAKERESPONSE_P_H
#define QTAWS_DESCRIBEHANDSHAKERESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DescribeHandshakeResponse;

class DescribeHandshakeResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DescribeHandshakeResponsePrivate(DescribeHandshakeResponse * const q);

    void parseDescribeHandshakeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHandshakeResponse)
    Q_DISABLE_COPY(DescribeHandshakeResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
