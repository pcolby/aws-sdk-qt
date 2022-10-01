// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONOBJECTSTORAGERESPONSE_H
#define QTAWS_CREATELOCATIONOBJECTSTORAGERESPONSE_H

#include "datasyncresponse.h"
#include "createlocationobjectstoragerequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationObjectStorageResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateLocationObjectStorageResponse : public DataSyncResponse {
    Q_OBJECT

public:
    CreateLocationObjectStorageResponse(const CreateLocationObjectStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocationObjectStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationObjectStorageResponse)
    Q_DISABLE_COPY(CreateLocationObjectStorageResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
