// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVERRESPONSE_H
#define QTAWS_CREATESERVERRESPONSE_H

#include "transferresponse.h"
#include "createserverrequest.h"

namespace QtAws {
namespace Transfer {

class CreateServerResponsePrivate;

class QTAWSTRANSFER_EXPORT CreateServerResponse : public TransferResponse {
    Q_OBJECT

public:
    CreateServerResponse(const CreateServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServerResponse)
    Q_DISABLE_COPY(CreateServerResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
