// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONSMBRESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONSMBRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationSmbResponse;

class DescribeLocationSmbResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeLocationSmbResponsePrivate(DescribeLocationSmbResponse * const q);

    void parseDescribeLocationSmbResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationSmbResponse)
    Q_DISABLE_COPY(DescribeLocationSmbResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
