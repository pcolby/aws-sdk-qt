// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESHAREINVITATIONRESPONSE_P_H
#define QTAWS_UPDATESHAREINVITATIONRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class UpdateShareInvitationResponse;

class UpdateShareInvitationResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit UpdateShareInvitationResponsePrivate(UpdateShareInvitationResponse * const q);

    void parseUpdateShareInvitationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateShareInvitationResponse)
    Q_DISABLE_COPY(UpdateShareInvitationResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
