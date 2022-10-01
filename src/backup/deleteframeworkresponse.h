// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFRAMEWORKRESPONSE_H
#define QTAWS_DELETEFRAMEWORKRESPONSE_H

#include "backupresponse.h"
#include "deleteframeworkrequest.h"

namespace QtAws {
namespace Backup {

class DeleteFrameworkResponsePrivate;

class QTAWSBACKUP_EXPORT DeleteFrameworkResponse : public BackupResponse {
    Q_OBJECT

public:
    DeleteFrameworkResponse(const DeleteFrameworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFrameworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFrameworkResponse)
    Q_DISABLE_COPY(DeleteFrameworkResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
