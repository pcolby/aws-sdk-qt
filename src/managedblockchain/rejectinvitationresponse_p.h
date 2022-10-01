// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINVITATIONRESPONSE_P_H
#define QTAWS_REJECTINVITATIONRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class RejectInvitationResponse;

class RejectInvitationResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit RejectInvitationResponsePrivate(RejectInvitationResponse * const q);

    void parseRejectInvitationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectInvitationResponse)
    Q_DISABLE_COPY(RejectInvitationResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
