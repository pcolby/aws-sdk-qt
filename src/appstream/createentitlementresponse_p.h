// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITLEMENTRESPONSE_P_H
#define QTAWS_CREATEENTITLEMENTRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class CreateEntitlementResponse;

class CreateEntitlementResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit CreateEntitlementResponsePrivate(CreateEntitlementResponse * const q);

    void parseCreateEntitlementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEntitlementResponse)
    Q_DISABLE_COPY(CreateEntitlementResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
