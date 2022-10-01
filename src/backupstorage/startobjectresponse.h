// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTOBJECTRESPONSE_H
#define QTAWS_STARTOBJECTRESPONSE_H

#include "backupstorageresponse.h"
#include "startobjectrequest.h"

namespace QtAws {
namespace BackupStorage {

class StartObjectResponsePrivate;

class QTAWSBACKUPSTORAGE_EXPORT StartObjectResponse : public BackupStorageResponse {
    Q_OBJECT

public:
    StartObjectResponse(const StartObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartObjectResponse)
    Q_DISABLE_COPY(StartObjectResponse)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
