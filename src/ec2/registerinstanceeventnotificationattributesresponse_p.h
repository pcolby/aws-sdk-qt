// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESRESPONSE_P_H
#define QTAWS_REGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RegisterInstanceEventNotificationAttributesResponse;

class RegisterInstanceEventNotificationAttributesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RegisterInstanceEventNotificationAttributesResponsePrivate(RegisterInstanceEventNotificationAttributesResponse * const q);

    void parseRegisterInstanceEventNotificationAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterInstanceEventNotificationAttributesResponse)
    Q_DISABLE_COPY(RegisterInstanceEventNotificationAttributesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
