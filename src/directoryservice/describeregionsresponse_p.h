// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGIONSRESPONSE_P_H
#define QTAWS_DESCRIBEREGIONSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeRegionsResponse;

class DescribeRegionsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeRegionsResponsePrivate(DescribeRegionsResponse * const q);

    void parseDescribeRegionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRegionsResponse)
    Q_DISABLE_COPY(DescribeRegionsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
