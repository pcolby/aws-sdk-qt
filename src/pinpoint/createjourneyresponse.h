// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOURNEYRESPONSE_H
#define QTAWS_CREATEJOURNEYRESPONSE_H

#include "pinpointresponse.h"
#include "createjourneyrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateJourneyResponsePrivate;

class QTAWSPINPOINT_EXPORT CreateJourneyResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreateJourneyResponse(const CreateJourneyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateJourneyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJourneyResponse)
    Q_DISABLE_COPY(CreateJourneyResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
