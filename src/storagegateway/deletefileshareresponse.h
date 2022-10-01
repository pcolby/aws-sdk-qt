// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESHARERESPONSE_H
#define QTAWS_DELETEFILESHARERESPONSE_H

#include "storagegatewayresponse.h"
#include "deletefilesharerequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteFileShareResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteFileShareResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DeleteFileShareResponse(const DeleteFileShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFileShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFileShareResponse)
    Q_DISABLE_COPY(DeleteFileShareResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
