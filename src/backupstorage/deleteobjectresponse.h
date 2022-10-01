// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTRESPONSE_H
#define QTAWS_DELETEOBJECTRESPONSE_H

#include "backupstorageresponse.h"
#include "deleteobjectrequest.h"

namespace QtAws {
namespace BackupStorage {

class DeleteObjectResponsePrivate;

class QTAWSBACKUPSTORAGE_EXPORT DeleteObjectResponse : public BackupStorageResponse {
    Q_OBJECT

public:
    DeleteObjectResponse(const DeleteObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObjectResponse)
    Q_DISABLE_COPY(DeleteObjectResponse)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
