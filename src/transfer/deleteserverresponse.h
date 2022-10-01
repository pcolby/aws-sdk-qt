// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERRESPONSE_H
#define QTAWS_DELETESERVERRESPONSE_H

#include "transferresponse.h"
#include "deleteserverrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteServerResponsePrivate;

class QTAWSTRANSFER_EXPORT DeleteServerResponse : public TransferResponse {
    Q_OBJECT

public:
    DeleteServerResponse(const DeleteServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServerResponse)
    Q_DISABLE_COPY(DeleteServerResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
