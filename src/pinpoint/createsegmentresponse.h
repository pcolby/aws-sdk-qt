// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESEGMENTRESPONSE_H
#define QTAWS_CREATESEGMENTRESPONSE_H

#include "pinpointresponse.h"
#include "createsegmentrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateSegmentResponsePrivate;

class QTAWSPINPOINT_EXPORT CreateSegmentResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreateSegmentResponse(const CreateSegmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSegmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSegmentResponse)
    Q_DISABLE_COPY(CreateSegmentResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
