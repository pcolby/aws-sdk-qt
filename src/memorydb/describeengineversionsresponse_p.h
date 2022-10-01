// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEENGINEVERSIONSRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class DescribeEngineVersionsResponse;

class DescribeEngineVersionsResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit DescribeEngineVersionsResponsePrivate(DescribeEngineVersionsResponse * const q);

    void parseDescribeEngineVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEngineVersionsResponse)
    Q_DISABLE_COPY(DescribeEngineVersionsResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
