// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENFSFILESHARERESPONSE_H
#define QTAWS_CREATENFSFILESHARERESPONSE_H

#include "storagegatewayresponse.h"
#include "createnfsfilesharerequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateNFSFileShareResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateNFSFileShareResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    CreateNFSFileShareResponse(const CreateNFSFileShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNFSFileShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNFSFileShareResponse)
    Q_DISABLE_COPY(CreateNFSFileShareResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
