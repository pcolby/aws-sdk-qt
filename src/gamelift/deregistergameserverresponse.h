// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERGAMESERVERRESPONSE_H
#define QTAWS_DEREGISTERGAMESERVERRESPONSE_H

#include "gameliftresponse.h"
#include "deregistergameserverrequest.h"

namespace QtAws {
namespace GameLift {

class DeregisterGameServerResponsePrivate;

class QTAWSGAMELIFT_EXPORT DeregisterGameServerResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DeregisterGameServerResponse(const DeregisterGameServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterGameServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterGameServerResponse)
    Q_DISABLE_COPY(DeregisterGameServerResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
