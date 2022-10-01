// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPSRESPONSE_P_H
#define QTAWS_DESCRIBEBACKUPSRESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeBackupsResponse;

class DescribeBackupsResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit DescribeBackupsResponsePrivate(DescribeBackupsResponse * const q);

    void parseDescribeBackupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBackupsResponse)
    Q_DISABLE_COPY(DescribeBackupsResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
