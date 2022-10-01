// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINVITATIONRESPONSE_P_H
#define QTAWS_ACCEPTINVITATIONRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class AcceptInvitationResponse;

class AcceptInvitationResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit AcceptInvitationResponsePrivate(AcceptInvitationResponse * const q);

    void parseAcceptInvitationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptInvitationResponse)
    Q_DISABLE_COPY(AcceptInvitationResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
