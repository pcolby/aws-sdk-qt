// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXOPENZFSRESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONFSXOPENZFSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxOpenZfsResponse;

class DescribeLocationFsxOpenZfsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeLocationFsxOpenZfsResponsePrivate(DescribeLocationFsxOpenZfsResponse * const q);

    void parseDescribeLocationFsxOpenZfsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationFsxOpenZfsResponse)
    Q_DISABLE_COPY(DescribeLocationFsxOpenZfsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
