// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTRESOURCESHAREINVITATIONRESPONSE_P_H
#define QTAWS_REJECTRESOURCESHAREINVITATIONRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class RejectResourceShareInvitationResponse;

class RejectResourceShareInvitationResponsePrivate : public RamResponsePrivate {

public:

    explicit RejectResourceShareInvitationResponsePrivate(RejectResourceShareInvitationResponse * const q);

    void parseRejectResourceShareInvitationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectResourceShareInvitationResponse)
    Q_DISABLE_COPY(RejectResourceShareInvitationResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
