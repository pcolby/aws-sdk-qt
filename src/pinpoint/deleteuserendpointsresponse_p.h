// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERENDPOINTSRESPONSE_P_H
#define QTAWS_DELETEUSERENDPOINTSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteUserEndpointsResponse;

class DeleteUserEndpointsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteUserEndpointsResponsePrivate(DeleteUserEndpointsResponse * const q);

    void parseDeleteUserEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserEndpointsResponse)
    Q_DISABLE_COPY(DeleteUserEndpointsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
