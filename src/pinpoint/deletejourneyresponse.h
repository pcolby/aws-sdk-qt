// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOURNEYRESPONSE_H
#define QTAWS_DELETEJOURNEYRESPONSE_H

#include "pinpointresponse.h"
#include "deletejourneyrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteJourneyResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteJourneyResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteJourneyResponse(const DeleteJourneyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteJourneyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJourneyResponse)
    Q_DISABLE_COPY(DeleteJourneyResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
