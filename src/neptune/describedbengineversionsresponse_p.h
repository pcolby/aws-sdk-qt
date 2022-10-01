// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBENGINEVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEDBENGINEVERSIONSRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DescribeDBEngineVersionsResponse;

class DescribeDBEngineVersionsResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DescribeDBEngineVersionsResponsePrivate(DescribeDBEngineVersionsResponse * const q);

    void parseDescribeDBEngineVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBEngineVersionsResponse)
    Q_DISABLE_COPY(DescribeDBEngineVersionsResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
