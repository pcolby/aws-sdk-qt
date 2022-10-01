// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFRAMEWORKRESPONSE_H
#define QTAWS_CREATEFRAMEWORKRESPONSE_H

#include "backupresponse.h"
#include "createframeworkrequest.h"

namespace QtAws {
namespace Backup {

class CreateFrameworkResponsePrivate;

class QTAWSBACKUP_EXPORT CreateFrameworkResponse : public BackupResponse {
    Q_OBJECT

public:
    CreateFrameworkResponse(const CreateFrameworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFrameworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFrameworkResponse)
    Q_DISABLE_COPY(CreateFrameworkResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
