// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERGAMESERVERRESPONSE_H
#define QTAWS_REGISTERGAMESERVERRESPONSE_H

#include "gameliftresponse.h"
#include "registergameserverrequest.h"

namespace QtAws {
namespace GameLift {

class RegisterGameServerResponsePrivate;

class QTAWSGAMELIFT_EXPORT RegisterGameServerResponse : public GameLiftResponse {
    Q_OBJECT

public:
    RegisterGameServerResponse(const RegisterGameServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterGameServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterGameServerResponse)
    Q_DISABLE_COPY(RegisterGameServerResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
