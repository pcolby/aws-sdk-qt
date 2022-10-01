// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTSBATCHRESPONSE_H
#define QTAWS_UPDATEENDPOINTSBATCHRESPONSE_H

#include "pinpointresponse.h"
#include "updateendpointsbatchrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEndpointsBatchResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateEndpointsBatchResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateEndpointsBatchResponse(const UpdateEndpointsBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEndpointsBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointsBatchResponse)
    Q_DISABLE_COPY(UpdateEndpointsBatchResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
