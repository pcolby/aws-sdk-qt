// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTRESPONSE_H
#define QTAWS_PUTOBJECTRESPONSE_H

#include "backupstorageresponse.h"
#include "putobjectrequest.h"

namespace QtAws {
namespace BackupStorage {

class PutObjectResponsePrivate;

class QTAWSBACKUPSTORAGE_EXPORT PutObjectResponse : public BackupStorageResponse {
    Q_OBJECT

public:
    PutObjectResponse(const PutObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectResponse)
    Q_DISABLE_COPY(PutObjectResponse)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
