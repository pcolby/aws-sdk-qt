// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILESYSTEMFROMBACKUPRESPONSE_H
#define QTAWS_CREATEFILESYSTEMFROMBACKUPRESPONSE_H

#include "fsxresponse.h"
#include "createfilesystemfrombackuprequest.h"

namespace QtAws {
namespace FSx {

class CreateFileSystemFromBackupResponsePrivate;

class QTAWSFSX_EXPORT CreateFileSystemFromBackupResponse : public FSxResponse {
    Q_OBJECT

public:
    CreateFileSystemFromBackupResponse(const CreateFileSystemFromBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFileSystemFromBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFileSystemFromBackupResponse)
    Q_DISABLE_COPY(CreateFileSystemFromBackupResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
