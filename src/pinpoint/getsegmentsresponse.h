// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTSRESPONSE_H
#define QTAWS_GETSEGMENTSRESPONSE_H

#include "pinpointresponse.h"
#include "getsegmentsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetSegmentsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetSegmentsResponse(const GetSegmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSegmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentsResponse)
    Q_DISABLE_COPY(GetSegmentsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
