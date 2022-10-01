// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFILESYSTEMRESPONSE_H
#define QTAWS_ASSOCIATEFILESYSTEMRESPONSE_H

#include "storagegatewayresponse.h"
#include "associatefilesystemrequest.h"

namespace QtAws {
namespace StorageGateway {

class AssociateFileSystemResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT AssociateFileSystemResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    AssociateFileSystemResponse(const AssociateFileSystemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateFileSystemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateFileSystemResponse)
    Q_DISABLE_COPY(AssociateFileSystemResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
