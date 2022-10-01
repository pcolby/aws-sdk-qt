// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEDICATEDIPPOOLRESPONSE_P_H
#define QTAWS_CREATEDEDICATEDIPPOOLRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class CreateDedicatedIpPoolResponse;

class CreateDedicatedIpPoolResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit CreateDedicatedIpPoolResponsePrivate(CreateDedicatedIpPoolResponse * const q);

    void parseCreateDedicatedIpPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDedicatedIpPoolResponse)
    Q_DISABLE_COPY(CreateDedicatedIpPoolResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
