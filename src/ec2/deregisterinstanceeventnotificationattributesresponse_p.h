// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESRESPONSE_P_H
#define QTAWS_DEREGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeregisterInstanceEventNotificationAttributesResponse;

class DeregisterInstanceEventNotificationAttributesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeregisterInstanceEventNotificationAttributesResponsePrivate(DeregisterInstanceEventNotificationAttributesResponse * const q);

    void parseDeregisterInstanceEventNotificationAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterInstanceEventNotificationAttributesResponse)
    Q_DISABLE_COPY(DeregisterInstanceEventNotificationAttributesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
