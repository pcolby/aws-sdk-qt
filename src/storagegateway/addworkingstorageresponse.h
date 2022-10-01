// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDWORKINGSTORAGERESPONSE_H
#define QTAWS_ADDWORKINGSTORAGERESPONSE_H

#include "storagegatewayresponse.h"
#include "addworkingstoragerequest.h"

namespace QtAws {
namespace StorageGateway {

class AddWorkingStorageResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT AddWorkingStorageResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    AddWorkingStorageResponse(const AddWorkingStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddWorkingStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddWorkingStorageResponse)
    Q_DISABLE_COPY(AddWorkingStorageResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
