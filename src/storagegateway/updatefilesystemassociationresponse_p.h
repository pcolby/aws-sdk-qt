// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILESYSTEMASSOCIATIONRESPONSE_P_H
#define QTAWS_UPDATEFILESYSTEMASSOCIATIONRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class UpdateFileSystemAssociationResponse;

class UpdateFileSystemAssociationResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit UpdateFileSystemAssociationResponsePrivate(UpdateFileSystemAssociationResponse * const q);

    void parseUpdateFileSystemAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFileSystemAssociationResponse)
    Q_DISABLE_COPY(UpdateFileSystemAssociationResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
