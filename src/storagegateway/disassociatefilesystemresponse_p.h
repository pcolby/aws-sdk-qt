// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFILESYSTEMRESPONSE_P_H
#define QTAWS_DISASSOCIATEFILESYSTEMRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DisassociateFileSystemResponse;

class DisassociateFileSystemResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DisassociateFileSystemResponsePrivate(DisassociateFileSystemResponse * const q);

    void parseDisassociateFileSystemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateFileSystemResponse)
    Q_DISABLE_COPY(DisassociateFileSystemResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
