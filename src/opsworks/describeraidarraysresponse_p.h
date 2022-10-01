// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERAIDARRAYSRESPONSE_P_H
#define QTAWS_DESCRIBERAIDARRAYSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeRaidArraysResponse;

class DescribeRaidArraysResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeRaidArraysResponsePrivate(DescribeRaidArraysResponse * const q);

    void parseDescribeRaidArraysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRaidArraysResponse)
    Q_DISABLE_COPY(DescribeRaidArraysResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
