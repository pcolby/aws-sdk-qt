// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENFSFILESHARERESPONSE_P_H
#define QTAWS_UPDATENFSFILESHARERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateNFSFileShareResponse;

class UpdateNFSFileShareResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateNFSFileShareResponsePrivate(UpdateNFSFileShareResponse * const q);

    void parseUpdateNFSFileShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNFSFileShareResponse)
    Q_DISABLE_COPY(UpdateNFSFileShareResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
