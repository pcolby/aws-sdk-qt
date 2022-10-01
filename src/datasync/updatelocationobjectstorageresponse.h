// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONOBJECTSTORAGERESPONSE_H
#define QTAWS_UPDATELOCATIONOBJECTSTORAGERESPONSE_H

#include "datasyncresponse.h"
#include "updatelocationobjectstoragerequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationObjectStorageResponsePrivate;

class QTAWSDATASYNC_EXPORT UpdateLocationObjectStorageResponse : public DataSyncResponse {
    Q_OBJECT

public:
    UpdateLocationObjectStorageResponse(const UpdateLocationObjectStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLocationObjectStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLocationObjectStorageResponse)
    Q_DISABLE_COPY(UpdateLocationObjectStorageResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
