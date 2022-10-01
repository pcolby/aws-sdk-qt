// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITLEMENTRESPONSE_P_H
#define QTAWS_DELETEENTITLEMENTRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DeleteEntitlementResponse;

class DeleteEntitlementResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DeleteEntitlementResponsePrivate(DeleteEntitlementResponse * const q);

    void parseDeleteEntitlementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEntitlementResponse)
    Q_DISABLE_COPY(DeleteEntitlementResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
