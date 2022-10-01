// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONEFSRESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONEFSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationEfsResponse;

class DescribeLocationEfsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeLocationEfsResponsePrivate(DescribeLocationEfsResponse * const q);

    void parseDescribeLocationEfsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationEfsResponse)
    Q_DISABLE_COPY(DescribeLocationEfsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
