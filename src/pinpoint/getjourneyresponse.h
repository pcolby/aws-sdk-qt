// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYRESPONSE_H
#define QTAWS_GETJOURNEYRESPONSE_H

#include "pinpointresponse.h"
#include "getjourneyrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyResponsePrivate;

class QTAWSPINPOINT_EXPORT GetJourneyResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetJourneyResponse(const GetJourneyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJourneyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJourneyResponse)
    Q_DISABLE_COPY(GetJourneyResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
