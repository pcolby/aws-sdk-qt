// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESOURCESHAREINVITATIONRESPONSE_P_H
#define QTAWS_ACCEPTRESOURCESHAREINVITATIONRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class AcceptResourceShareInvitationResponse;

class AcceptResourceShareInvitationResponsePrivate : public RamResponsePrivate {

public:

    explicit AcceptResourceShareInvitationResponsePrivate(AcceptResourceShareInvitationResponse * const q);

    void parseAcceptResourceShareInvitationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptResourceShareInvitationResponse)
    Q_DISABLE_COPY(AcceptResourceShareInvitationResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
