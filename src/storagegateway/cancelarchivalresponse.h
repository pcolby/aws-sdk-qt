// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELARCHIVALRESPONSE_H
#define QTAWS_CANCELARCHIVALRESPONSE_H

#include "storagegatewayresponse.h"
#include "cancelarchivalrequest.h"

namespace QtAws {
namespace StorageGateway {

class CancelArchivalResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CancelArchivalResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    CancelArchivalResponse(const CancelArchivalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelArchivalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelArchivalResponse)
    Q_DISABLE_COPY(CancelArchivalResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
