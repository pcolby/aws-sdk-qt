// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESEGMENTRESPONSE_H
#define QTAWS_UPDATESEGMENTRESPONSE_H

#include "pinpointresponse.h"
#include "updatesegmentrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSegmentResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateSegmentResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateSegmentResponse(const UpdateSegmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSegmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSegmentResponse)
    Q_DISABLE_COPY(UpdateSegmentResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
