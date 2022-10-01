// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYOBJECTCOMPLETERESPONSE_H
#define QTAWS_NOTIFYOBJECTCOMPLETERESPONSE_H

#include "backupstorageresponse.h"
#include "notifyobjectcompleterequest.h"

namespace QtAws {
namespace BackupStorage {

class NotifyObjectCompleteResponsePrivate;

class QTAWSBACKUPSTORAGE_EXPORT NotifyObjectCompleteResponse : public BackupStorageResponse {
    Q_OBJECT

public:
    NotifyObjectCompleteResponse(const NotifyObjectCompleteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const NotifyObjectCompleteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyObjectCompleteResponse)
    Q_DISABLE_COPY(NotifyObjectCompleteResponse)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
