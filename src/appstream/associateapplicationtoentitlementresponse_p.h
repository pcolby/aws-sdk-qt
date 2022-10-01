// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPLICATIONTOENTITLEMENTRESPONSE_P_H
#define QTAWS_ASSOCIATEAPPLICATIONTOENTITLEMENTRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class AssociateApplicationToEntitlementResponse;

class AssociateApplicationToEntitlementResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit AssociateApplicationToEntitlementResponsePrivate(AssociateApplicationToEntitlementResponse * const q);

    void parseAssociateApplicationToEntitlementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateApplicationToEntitlementResponse)
    Q_DISABLE_COPY(AssociateApplicationToEntitlementResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
