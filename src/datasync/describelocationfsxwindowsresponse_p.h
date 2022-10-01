// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXWINDOWSRESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONFSXWINDOWSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxWindowsResponse;

class DescribeLocationFsxWindowsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeLocationFsxWindowsResponsePrivate(DescribeLocationFsxWindowsResponse * const q);

    void parseDescribeLocationFsxWindowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationFsxWindowsResponse)
    Q_DISABLE_COPY(DescribeLocationFsxWindowsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
