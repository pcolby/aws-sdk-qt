// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOURNEYSTATERESPONSE_H
#define QTAWS_UPDATEJOURNEYSTATERESPONSE_H

#include "pinpointresponse.h"
#include "updatejourneystaterequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateJourneyStateResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateJourneyStateResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateJourneyStateResponse(const UpdateJourneyStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateJourneyStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJourneyStateResponse)
    Q_DISABLE_COPY(UpdateJourneyStateResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
