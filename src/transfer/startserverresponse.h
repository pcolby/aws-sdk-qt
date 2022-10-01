// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSERVERRESPONSE_H
#define QTAWS_STARTSERVERRESPONSE_H

#include "transferresponse.h"
#include "startserverrequest.h"

namespace QtAws {
namespace Transfer {

class StartServerResponsePrivate;

class QTAWSTRANSFER_EXPORT StartServerResponse : public TransferResponse {
    Q_OBJECT

public:
    StartServerResponse(const StartServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartServerResponse)
    Q_DISABLE_COPY(StartServerResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
