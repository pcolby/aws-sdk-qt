// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESERVERRESPONSE_H
#define QTAWS_UPDATEGAMESERVERRESPONSE_H

#include "gameliftresponse.h"
#include "updategameserverrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameServerResponsePrivate;

class QTAWSGAMELIFT_EXPORT UpdateGameServerResponse : public GameLiftResponse {
    Q_OBJECT

public:
    UpdateGameServerResponse(const UpdateGameServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGameServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameServerResponse)
    Q_DISABLE_COPY(UpdateGameServerResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
