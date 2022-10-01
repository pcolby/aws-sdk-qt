// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEDICATEDIPPOOLRESPONSE_P_H
#define QTAWS_DELETEDEDICATEDIPPOOLRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteDedicatedIpPoolResponse;

class DeleteDedicatedIpPoolResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit DeleteDedicatedIpPoolResponsePrivate(DeleteDedicatedIpPoolResponse * const q);

    void parseDeleteDedicatedIpPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDedicatedIpPoolResponse)
    Q_DISABLE_COPY(DeleteDedicatedIpPoolResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
