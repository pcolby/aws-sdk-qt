// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGIONSETTINGSREQUEST_H
#define QTAWS_UPDATEREGIONSETTINGSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class UpdateRegionSettingsRequestPrivate;

class QTAWSBACKUP_EXPORT UpdateRegionSettingsRequest : public BackupRequest {

public:
    UpdateRegionSettingsRequest(const UpdateRegionSettingsRequest &other);
    UpdateRegionSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRegionSettingsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
