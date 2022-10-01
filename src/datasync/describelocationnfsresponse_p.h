// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONNFSRESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONNFSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationNfsResponse;

class DescribeLocationNfsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeLocationNfsResponsePrivate(DescribeLocationNfsResponse * const q);

    void parseDescribeLocationNfsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationNfsResponse)
    Q_DISABLE_COPY(DescribeLocationNfsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
