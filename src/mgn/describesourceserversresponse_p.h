// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCESERVERSRESPONSE_P_H
#define QTAWS_DESCRIBESOURCESERVERSRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class DescribeSourceServersResponse;

class DescribeSourceServersResponsePrivate : public MgnResponsePrivate {

public:

    explicit DescribeSourceServersResponsePrivate(DescribeSourceServersResponse * const q);

    void parseDescribeSourceServersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSourceServersResponse)
    Q_DISABLE_COPY(DescribeSourceServersResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
