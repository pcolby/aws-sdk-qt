// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGIONSETTINGSREQUEST_P_H
#define QTAWS_DESCRIBEREGIONSETTINGSREQUEST_P_H

#include "backuprequest_p.h"
#include "describeregionsettingsrequest.h"

namespace QtAws {
namespace Backup {

class DescribeRegionSettingsRequest;

class DescribeRegionSettingsRequestPrivate : public BackupRequestPrivate {

public:
    DescribeRegionSettingsRequestPrivate(const BackupRequest::Action action,
                                   DescribeRegionSettingsRequest * const q);
    DescribeRegionSettingsRequestPrivate(const DescribeRegionSettingsRequestPrivate &other,
                                   DescribeRegionSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRegionSettingsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
