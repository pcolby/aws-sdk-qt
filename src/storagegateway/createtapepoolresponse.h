// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAPEPOOLRESPONSE_H
#define QTAWS_CREATETAPEPOOLRESPONSE_H

#include "storagegatewayresponse.h"
#include "createtapepoolrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateTapePoolResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateTapePoolResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    CreateTapePoolResponse(const CreateTapePoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTapePoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTapePoolResponse)
    Q_DISABLE_COPY(CreateTapePoolResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
