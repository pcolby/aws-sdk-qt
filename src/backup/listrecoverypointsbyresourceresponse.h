// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSBYRESOURCERESPONSE_H
#define QTAWS_LISTRECOVERYPOINTSBYRESOURCERESPONSE_H

#include "backupresponse.h"
#include "listrecoverypointsbyresourcerequest.h"

namespace QtAws {
namespace Backup {

class ListRecoveryPointsByResourceResponsePrivate;

class QTAWSBACKUP_EXPORT ListRecoveryPointsByResourceResponse : public BackupResponse {
    Q_OBJECT

public:
    ListRecoveryPointsByResourceResponse(const ListRecoveryPointsByResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecoveryPointsByResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecoveryPointsByResourceResponse)
    Q_DISABLE_COPY(ListRecoveryPointsByResourceResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
