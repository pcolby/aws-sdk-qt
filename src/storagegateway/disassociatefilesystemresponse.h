// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFILESYSTEMRESPONSE_H
#define QTAWS_DISASSOCIATEFILESYSTEMRESPONSE_H

#include "storagegatewayresponse.h"
#include "disassociatefilesystemrequest.h"

namespace QtAws {
namespace StorageGateway {

class DisassociateFileSystemResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DisassociateFileSystemResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DisassociateFileSystemResponse(const DisassociateFileSystemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateFileSystemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateFileSystemResponse)
    Q_DISABLE_COPY(DisassociateFileSystemResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
