// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVITATIONSRESPONSE_P_H
#define QTAWS_LISTINVITATIONSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class ListInvitationsResponse;

class ListInvitationsResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit ListInvitationsResponsePrivate(ListInvitationsResponse * const q);

    void parseListInvitationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInvitationsResponse)
    Q_DISABLE_COPY(ListInvitationsResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
