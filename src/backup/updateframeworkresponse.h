// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFRAMEWORKRESPONSE_H
#define QTAWS_UPDATEFRAMEWORKRESPONSE_H

#include "backupresponse.h"
#include "updateframeworkrequest.h"

namespace QtAws {
namespace Backup {

class UpdateFrameworkResponsePrivate;

class QTAWSBACKUP_EXPORT UpdateFrameworkResponse : public BackupResponse {
    Q_OBJECT

public:
    UpdateFrameworkResponse(const UpdateFrameworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFrameworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFrameworkResponse)
    Q_DISABLE_COPY(UpdateFrameworkResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
