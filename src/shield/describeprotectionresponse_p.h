// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTIONRESPONSE_P_H
#define QTAWS_DESCRIBEPROTECTIONRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DescribeProtectionResponse;

class DescribeProtectionResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DescribeProtectionResponsePrivate(DescribeProtectionResponse * const q);

    void parseDescribeProtectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProtectionResponse)
    Q_DISABLE_COPY(DescribeProtectionResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
