// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILESHARERESPONSE_P_H
#define QTAWS_DELETEFILESHARERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DeleteFileShareResponse;

class DeleteFileShareResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DeleteFileShareResponsePrivate(DeleteFileShareResponse * const q);

    void parseDeleteFileShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFileShareResponse)
    Q_DISABLE_COPY(DeleteFileShareResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
