// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTVERSIONSRESPONSE_H
#define QTAWS_GETSEGMENTVERSIONSRESPONSE_H

#include "pinpointresponse.h"
#include "getsegmentversionsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentVersionsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetSegmentVersionsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetSegmentVersionsResponse(const GetSegmentVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSegmentVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentVersionsResponse)
    Q_DISABLE_COPY(GetSegmentVersionsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
