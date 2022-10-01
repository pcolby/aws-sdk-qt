// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREINVITATIONSRESPONSE_P_H
#define QTAWS_LISTSHAREINVITATIONSRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ListShareInvitationsResponse;

class ListShareInvitationsResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ListShareInvitationsResponsePrivate(ListShareInvitationsResponse * const q);

    void parseListShareInvitationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListShareInvitationsResponse)
    Q_DISABLE_COPY(ListShareInvitationsResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
