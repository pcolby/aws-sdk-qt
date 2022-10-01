// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMATCHMAKINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEMATCHMAKINGCONFIGURATIONRESPONSE_H

#include "gameliftresponse.h"
#include "deletematchmakingconfigurationrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteMatchmakingConfigurationResponsePrivate;

class QTAWSGAMELIFT_EXPORT DeleteMatchmakingConfigurationResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DeleteMatchmakingConfigurationResponse(const DeleteMatchmakingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMatchmakingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMatchmakingConfigurationResponse)
    Q_DISABLE_COPY(DeleteMatchmakingConfigurationResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
