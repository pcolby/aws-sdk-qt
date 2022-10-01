// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSERVERRESPONSE_H
#define QTAWS_STOPSERVERRESPONSE_H

#include "transferresponse.h"
#include "stopserverrequest.h"

namespace QtAws {
namespace Transfer {

class StopServerResponsePrivate;

class QTAWSTRANSFER_EXPORT StopServerResponse : public TransferResponse {
    Q_OBJECT

public:
    StopServerResponse(const StopServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopServerResponse)
    Q_DISABLE_COPY(StopServerResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
