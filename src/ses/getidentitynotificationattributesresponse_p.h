// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYNOTIFICATIONATTRIBUTESRESPONSE_P_H
#define QTAWS_GETIDENTITYNOTIFICATIONATTRIBUTESRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class GetIdentityNotificationAttributesResponse;

class GetIdentityNotificationAttributesResponsePrivate : public SesResponsePrivate {

public:

    explicit GetIdentityNotificationAttributesResponsePrivate(GetIdentityNotificationAttributesResponse * const q);

    void parseGetIdentityNotificationAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdentityNotificationAttributesResponse)
    Q_DISABLE_COPY(GetIdentityNotificationAttributesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
