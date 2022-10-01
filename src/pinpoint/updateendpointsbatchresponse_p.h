// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTSBATCHRESPONSE_P_H
#define QTAWS_UPDATEENDPOINTSBATCHRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEndpointsBatchResponse;

class UpdateEndpointsBatchResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateEndpointsBatchResponsePrivate(UpdateEndpointsBatchResponse * const q);

    void parseUpdateEndpointsBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointsBatchResponse)
    Q_DISABLE_COPY(UpdateEndpointsBatchResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
