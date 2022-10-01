// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETPORTSETTINGSRESPONSE_H
#define QTAWS_UPDATEFLEETPORTSETTINGSRESPONSE_H

#include "gameliftresponse.h"
#include "updatefleetportsettingsrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetPortSettingsResponsePrivate;

class QTAWSGAMELIFT_EXPORT UpdateFleetPortSettingsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    UpdateFleetPortSettingsResponse(const UpdateFleetPortSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFleetPortSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetPortSettingsResponse)
    Q_DISABLE_COPY(UpdateFleetPortSettingsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
