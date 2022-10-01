// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENFSFILESHARERESPONSE_H
#define QTAWS_UPDATENFSFILESHARERESPONSE_H

#include "storagegatewayresponse.h"
#include "updatenfsfilesharerequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateNFSFileShareResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateNFSFileShareResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateNFSFileShareResponse(const UpdateNFSFileShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNFSFileShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNFSFileShareResponse)
    Q_DISABLE_COPY(UpdateNFSFileShareResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
