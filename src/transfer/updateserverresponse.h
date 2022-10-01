// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERRESPONSE_H
#define QTAWS_UPDATESERVERRESPONSE_H

#include "transferresponse.h"
#include "updateserverrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateServerResponsePrivate;

class QTAWSTRANSFER_EXPORT UpdateServerResponse : public TransferResponse {
    Q_OBJECT

public:
    UpdateServerResponse(const UpdateServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServerResponse)
    Q_DISABLE_COPY(UpdateServerResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
