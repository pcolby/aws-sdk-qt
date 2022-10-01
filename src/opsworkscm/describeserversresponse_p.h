// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVERSRESPONSE_P_H
#define QTAWS_DESCRIBESERVERSRESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeServersResponse;

class DescribeServersResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit DescribeServersResponsePrivate(DescribeServersResponse * const q);

    void parseDescribeServersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServersResponse)
    Q_DISABLE_COPY(DescribeServersResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
