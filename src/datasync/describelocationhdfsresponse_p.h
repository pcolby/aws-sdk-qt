// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONHDFSRESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONHDFSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationHdfsResponse;

class DescribeLocationHdfsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeLocationHdfsResponsePrivate(DescribeLocationHdfsResponse * const q);

    void parseDescribeLocationHdfsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationHdfsResponse)
    Q_DISABLE_COPY(DescribeLocationHdfsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
