// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRETRIEVALRESPONSE_H
#define QTAWS_CANCELRETRIEVALRESPONSE_H

#include "storagegatewayresponse.h"
#include "cancelretrievalrequest.h"

namespace QtAws {
namespace StorageGateway {

class CancelRetrievalResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CancelRetrievalResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    CancelRetrievalResponse(const CancelRetrievalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelRetrievalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelRetrievalResponse)
    Q_DISABLE_COPY(CancelRetrievalResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
