// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENTITLEMENTRESPONSE_P_H
#define QTAWS_UPDATEENTITLEMENTRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class UpdateEntitlementResponse;

class UpdateEntitlementResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit UpdateEntitlementResponsePrivate(UpdateEntitlementResponse * const q);

    void parseUpdateEntitlementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEntitlementResponse)
    Q_DISABLE_COPY(UpdateEntitlementResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
