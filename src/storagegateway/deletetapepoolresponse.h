// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAPEPOOLRESPONSE_H
#define QTAWS_DELETETAPEPOOLRESPONSE_H

#include "storagegatewayresponse.h"
#include "deletetapepoolrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteTapePoolResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteTapePoolResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DeleteTapePoolResponse(const DeleteTapePoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTapePoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTapePoolResponse)
    Q_DISABLE_COPY(DeleteTapePoolResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
