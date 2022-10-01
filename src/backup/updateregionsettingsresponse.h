// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGIONSETTINGSRESPONSE_H
#define QTAWS_UPDATEREGIONSETTINGSRESPONSE_H

#include "backupresponse.h"
#include "updateregionsettingsrequest.h"

namespace QtAws {
namespace Backup {

class UpdateRegionSettingsResponsePrivate;

class QTAWSBACKUP_EXPORT UpdateRegionSettingsResponse : public BackupResponse {
    Q_OBJECT

public:
    UpdateRegionSettingsResponse(const UpdateRegionSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRegionSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRegionSettingsResponse)
    Q_DISABLE_COPY(UpdateRegionSettingsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
