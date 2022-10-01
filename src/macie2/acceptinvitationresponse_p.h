// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINVITATIONRESPONSE_P_H
#define QTAWS_ACCEPTINVITATIONRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class AcceptInvitationResponse;

class AcceptInvitationResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit AcceptInvitationResponsePrivate(AcceptInvitationResponse * const q);

    void parseAcceptInvitationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptInvitationResponse)
    Q_DISABLE_COPY(AcceptInvitationResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
