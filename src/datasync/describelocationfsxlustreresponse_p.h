// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXLUSTRERESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONFSXLUSTRERESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxLustreResponse;

class DescribeLocationFsxLustreResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeLocationFsxLustreResponsePrivate(DescribeLocationFsxLustreResponse * const q);

    void parseDescribeLocationFsxLustreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationFsxLustreResponse)
    Q_DISABLE_COPY(DescribeLocationFsxLustreResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
