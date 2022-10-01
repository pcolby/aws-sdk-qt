// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOURNEYRESPONSE_H
#define QTAWS_UPDATEJOURNEYRESPONSE_H

#include "pinpointresponse.h"
#include "updatejourneyrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateJourneyResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateJourneyResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateJourneyResponse(const UpdateJourneyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateJourneyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJourneyResponse)
    Q_DISABLE_COPY(UpdateJourneyResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
