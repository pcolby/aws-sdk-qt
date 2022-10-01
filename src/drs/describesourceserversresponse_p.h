// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCESERVERSRESPONSE_P_H
#define QTAWS_DESCRIBESOURCESERVERSRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DescribeSourceServersResponse;

class DescribeSourceServersResponsePrivate : public DrsResponsePrivate {

public:

    explicit DescribeSourceServersResponsePrivate(DescribeSourceServersResponse * const q);

    void parseDescribeSourceServersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSourceServersResponse)
    Q_DISABLE_COPY(DescribeSourceServersResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
