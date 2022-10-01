// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYRESPONSE_P_H
#define QTAWS_DELETEEMAILIDENTITYRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteEmailIdentityResponse;

class DeleteEmailIdentityResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit DeleteEmailIdentityResponsePrivate(DeleteEmailIdentityResponse * const q);

    void parseDeleteEmailIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEmailIdentityResponse)
    Q_DISABLE_COPY(DeleteEmailIdentityResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
