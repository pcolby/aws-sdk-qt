// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTRESPONSE_H
#define QTAWS_UPDATEENDPOINTRESPONSE_H

#include "pinpointresponse.h"
#include "updateendpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEndpointResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateEndpointResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateEndpointResponse(const UpdateEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointResponse)
    Q_DISABLE_COPY(UpdateEndpointResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
