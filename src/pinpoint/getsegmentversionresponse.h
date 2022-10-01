// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTVERSIONRESPONSE_H
#define QTAWS_GETSEGMENTVERSIONRESPONSE_H

#include "pinpointresponse.h"
#include "getsegmentversionrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentVersionResponsePrivate;

class QTAWSPINPOINT_EXPORT GetSegmentVersionResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetSegmentVersionResponse(const GetSegmentVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSegmentVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentVersionResponse)
    Q_DISABLE_COPY(GetSegmentVersionResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
