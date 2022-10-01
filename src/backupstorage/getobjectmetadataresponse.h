// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTMETADATARESPONSE_H
#define QTAWS_GETOBJECTMETADATARESPONSE_H

#include "backupstorageresponse.h"
#include "getobjectmetadatarequest.h"

namespace QtAws {
namespace BackupStorage {

class GetObjectMetadataResponsePrivate;

class QTAWSBACKUPSTORAGE_EXPORT GetObjectMetadataResponse : public BackupStorageResponse {
    Q_OBJECT

public:
    GetObjectMetadataResponse(const GetObjectMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetObjectMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectMetadataResponse)
    Q_DISABLE_COPY(GetObjectMetadataResponse)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
