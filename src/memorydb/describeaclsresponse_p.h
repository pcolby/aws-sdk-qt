// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACLSRESPONSE_P_H
#define QTAWS_DESCRIBEACLSRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class DescribeACLsResponse;

class DescribeACLsResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit DescribeACLsResponsePrivate(DescribeACLsResponse * const q);

    void parseDescribeACLsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeACLsResponse)
    Q_DISABLE_COPY(DescribeACLsResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
