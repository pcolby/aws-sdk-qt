// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENFSFILESHARERESPONSE_P_H
#define QTAWS_CREATENFSFILESHARERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class CreateNFSFileShareResponse;

class CreateNFSFileShareResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit CreateNFSFileShareResponsePrivate(CreateNFSFileShareResponse * const q);

    void parseCreateNFSFileShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNFSFileShareResponse)
    Q_DISABLE_COPY(CreateNFSFileShareResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
