// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKUPPLANTEMPLATESRESPONSE_H
#define QTAWS_LISTBACKUPPLANTEMPLATESRESPONSE_H

#include "backupresponse.h"
#include "listbackupplantemplatesrequest.h"

namespace QtAws {
namespace Backup {

class ListBackupPlanTemplatesResponsePrivate;

class QTAWSBACKUP_EXPORT ListBackupPlanTemplatesResponse : public BackupResponse {
    Q_OBJECT

public:
    ListBackupPlanTemplatesResponse(const ListBackupPlanTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBackupPlanTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackupPlanTemplatesResponse)
    Q_DISABLE_COPY(ListBackupPlanTemplatesResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
