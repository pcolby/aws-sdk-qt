// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMATCHMAKINGCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEMATCHMAKINGCONFIGURATIONRESPONSE_H

#include "gameliftresponse.h"
#include "updatematchmakingconfigurationrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateMatchmakingConfigurationResponsePrivate;

class QTAWSGAMELIFT_EXPORT UpdateMatchmakingConfigurationResponse : public GameLiftResponse {
    Q_OBJECT

public:
    UpdateMatchmakingConfigurationResponse(const UpdateMatchmakingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMatchmakingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMatchmakingConfigurationResponse)
    Q_DISABLE_COPY(UpdateMatchmakingConfigurationResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
