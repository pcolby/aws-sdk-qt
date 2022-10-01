// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBLOGFILESRESPONSE_P_H
#define QTAWS_DESCRIBEDBLOGFILESRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBLogFilesResponse;

class DescribeDBLogFilesResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBLogFilesResponsePrivate(DescribeDBLogFilesResponse * const q);

    void parseDescribeDBLogFilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBLogFilesResponse)
    Q_DISABLE_COPY(DescribeDBLogFilesResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
