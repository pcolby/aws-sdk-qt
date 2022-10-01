// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALSETTINGSREQUEST_P_H
#define QTAWS_DESCRIBEGLOBALSETTINGSREQUEST_P_H

#include "backuprequest_p.h"
#include "describeglobalsettingsrequest.h"

namespace QtAws {
namespace Backup {

class DescribeGlobalSettingsRequest;

class DescribeGlobalSettingsRequestPrivate : public BackupRequestPrivate {

public:
    DescribeGlobalSettingsRequestPrivate(const BackupRequest::Action action,
                                   DescribeGlobalSettingsRequest * const q);
    DescribeGlobalSettingsRequestPrivate(const DescribeGlobalSettingsRequestPrivate &other,
                                   DescribeGlobalSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalSettingsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
