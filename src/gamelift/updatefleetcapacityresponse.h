// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETCAPACITYRESPONSE_H
#define QTAWS_UPDATEFLEETCAPACITYRESPONSE_H

#include "gameliftresponse.h"
#include "updatefleetcapacityrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetCapacityResponsePrivate;

class QTAWSGAMELIFT_EXPORT UpdateFleetCapacityResponse : public GameLiftResponse {
    Q_OBJECT

public:
    UpdateFleetCapacityResponse(const UpdateFleetCapacityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFleetCapacityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetCapacityResponse)
    Q_DISABLE_COPY(UpdateFleetCapacityResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
