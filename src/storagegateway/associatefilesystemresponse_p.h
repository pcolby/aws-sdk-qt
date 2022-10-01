// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFILESYSTEMRESPONSE_P_H
#define QTAWS_ASSOCIATEFILESYSTEMRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class AssociateFileSystemResponse;

class AssociateFileSystemResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit AssociateFileSystemResponsePrivate(AssociateFileSystemResponse * const q);

    void parseAssociateFileSystemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateFileSystemResponse)
    Q_DISABLE_COPY(AssociateFileSystemResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
