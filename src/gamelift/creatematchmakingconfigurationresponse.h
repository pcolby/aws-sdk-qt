// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMATCHMAKINGCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEMATCHMAKINGCONFIGURATIONRESPONSE_H

#include "gameliftresponse.h"
#include "creatematchmakingconfigurationrequest.h"

namespace QtAws {
namespace GameLift {

class CreateMatchmakingConfigurationResponsePrivate;

class QTAWSGAMELIFT_EXPORT CreateMatchmakingConfigurationResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreateMatchmakingConfigurationResponse(const CreateMatchmakingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMatchmakingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMatchmakingConfigurationResponse)
    Q_DISABLE_COPY(CreateMatchmakingConfigurationResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
