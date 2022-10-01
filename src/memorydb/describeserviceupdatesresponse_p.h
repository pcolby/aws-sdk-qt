// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEUPDATESRESPONSE_P_H
#define QTAWS_DESCRIBESERVICEUPDATESRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class DescribeServiceUpdatesResponse;

class DescribeServiceUpdatesResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit DescribeServiceUpdatesResponsePrivate(DescribeServiceUpdatesResponse * const q);

    void parseDescribeServiceUpdatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServiceUpdatesResponse)
    Q_DISABLE_COPY(DescribeServiceUpdatesResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
