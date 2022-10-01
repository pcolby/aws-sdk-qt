// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFRAMEWORKRESPONSE_P_H
#define QTAWS_DESCRIBEFRAMEWORKRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeFrameworkResponse;

class DescribeFrameworkResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeFrameworkResponsePrivate(DescribeFrameworkResponse * const q);

    void parseDescribeFrameworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFrameworkResponse)
    Q_DISABLE_COPY(DescribeFrameworkResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
