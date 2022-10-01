// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTRESPONSE_H
#define QTAWS_GETENDPOINTRESPONSE_H

#include "pinpointresponse.h"
#include "getendpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEndpointResponsePrivate;

class QTAWSPINPOINT_EXPORT GetEndpointResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetEndpointResponse(const GetEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEndpointResponse)
    Q_DISABLE_COPY(GetEndpointResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
