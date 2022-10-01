// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPESRESPONSE_H
#define QTAWS_CREATETAPESRESPONSE_H

#include "storagegatewayresponse.h"
#include "createtapesrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapesResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateTapesResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    CreateTapesResponse(const CreateTapesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTapesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTapesResponse)
    Q_DISABLE_COPY(CreateTapesResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
