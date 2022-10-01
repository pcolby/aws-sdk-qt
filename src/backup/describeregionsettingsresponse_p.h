// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGIONSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBEREGIONSETTINGSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeRegionSettingsResponse;

class DescribeRegionSettingsResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeRegionSettingsResponsePrivate(DescribeRegionSettingsResponse * const q);

    void parseDescribeRegionSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRegionSettingsResponse)
    Q_DISABLE_COPY(DescribeRegionSettingsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
