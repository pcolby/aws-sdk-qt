// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTKEYRESPONSE_H
#define QTAWS_DELETEHOSTKEYRESPONSE_H

#include "transferresponse.h"
#include "deletehostkeyrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteHostKeyResponsePrivate;

class QTAWSTRANSFER_EXPORT DeleteHostKeyResponse : public TransferResponse {
    Q_OBJECT

public:
    DeleteHostKeyResponse(const DeleteHostKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHostKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHostKeyResponse)
    Q_DISABLE_COPY(DeleteHostKeyResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
