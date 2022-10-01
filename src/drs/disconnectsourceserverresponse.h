// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTSOURCESERVERRESPONSE_H
#define QTAWS_DISCONNECTSOURCESERVERRESPONSE_H

#include "drsresponse.h"
#include "disconnectsourceserverrequest.h"

namespace QtAws {
namespace Drs {

class DisconnectSourceServerResponsePrivate;

class QTAWSDRS_EXPORT DisconnectSourceServerResponse : public DrsResponse {
    Q_OBJECT

public:
    DisconnectSourceServerResponse(const DisconnectSourceServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisconnectSourceServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectSourceServerResponse)
    Q_DISABLE_COPY(DisconnectSourceServerResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
