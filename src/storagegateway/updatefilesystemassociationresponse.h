// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILESYSTEMASSOCIATIONRESPONSE_H
#define QTAWS_UPDATEFILESYSTEMASSOCIATIONRESPONSE_H

#include "storagegatewayresponse.h"
#include "updatefilesystemassociationrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateFileSystemAssociationResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateFileSystemAssociationResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateFileSystemAssociationResponse(const UpdateFileSystemAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFileSystemAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFileSystemAssociationResponse)
    Q_DISABLE_COPY(UpdateFileSystemAssociationResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
