// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHAREINVITATIONSRESPONSE_P_H
#define QTAWS_GETRESOURCESHAREINVITATIONSRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class GetResourceShareInvitationsResponse;

class GetResourceShareInvitationsResponsePrivate : public RamResponsePrivate {

public:

    explicit GetResourceShareInvitationsResponsePrivate(GetResourceShareInvitationsResponse * const q);

    void parseGetResourceShareInvitationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceShareInvitationsResponse)
    Q_DISABLE_COPY(GetResourceShareInvitationsResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
