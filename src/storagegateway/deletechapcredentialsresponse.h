// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHAPCREDENTIALSRESPONSE_H
#define QTAWS_DELETECHAPCREDENTIALSRESPONSE_H

#include "storagegatewayresponse.h"
#include "deletechapcredentialsrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteChapCredentialsResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteChapCredentialsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DeleteChapCredentialsResponse(const DeleteChapCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChapCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChapCredentialsResponse)
    Q_DISABLE_COPY(DeleteChapCredentialsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
