// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPRESPONSE_H
#define QTAWS_DELETEBACKUPRESPONSE_H

#include "fsxresponse.h"
#include "deletebackuprequest.h"

namespace QtAws {
namespace FSx {

class DeleteBackupResponsePrivate;

class QTAWSFSX_EXPORT DeleteBackupResponse : public FSxResponse {
    Q_OBJECT

public:
    DeleteBackupResponse(const DeleteBackupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackupResponse)
    Q_DISABLE_COPY(DeleteBackupResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
