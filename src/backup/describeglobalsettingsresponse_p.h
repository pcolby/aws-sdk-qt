// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBEGLOBALSETTINGSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeGlobalSettingsResponse;

class DescribeGlobalSettingsResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeGlobalSettingsResponsePrivate(DescribeGlobalSettingsResponse * const q);

    void parseDescribeGlobalSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalSettingsResponse)
    Q_DISABLE_COPY(DescribeGlobalSettingsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
