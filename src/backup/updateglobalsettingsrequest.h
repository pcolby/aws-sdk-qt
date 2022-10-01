// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALSETTINGSREQUEST_H
#define QTAWS_UPDATEGLOBALSETTINGSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class UpdateGlobalSettingsRequestPrivate;

class QTAWSBACKUP_EXPORT UpdateGlobalSettingsRequest : public BackupRequest {

public:
    UpdateGlobalSettingsRequest(const UpdateGlobalSettingsRequest &other);
    UpdateGlobalSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGlobalSettingsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
