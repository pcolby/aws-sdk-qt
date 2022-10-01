// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGIONSETTINGSREQUEST_P_H
#define QTAWS_UPDATEREGIONSETTINGSREQUEST_P_H

#include "backuprequest_p.h"
#include "updateregionsettingsrequest.h"

namespace QtAws {
namespace Backup {

class UpdateRegionSettingsRequest;

class UpdateRegionSettingsRequestPrivate : public BackupRequestPrivate {

public:
    UpdateRegionSettingsRequestPrivate(const BackupRequest::Action action,
                                   UpdateRegionSettingsRequest * const q);
    UpdateRegionSettingsRequestPrivate(const UpdateRegionSettingsRequestPrivate &other,
                                   UpdateRegionSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRegionSettingsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
