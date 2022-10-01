// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINVITATIONSRESPONSE_P_H
#define QTAWS_CREATEINVITATIONSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class CreateInvitationsResponse;

class CreateInvitationsResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit CreateInvitationsResponsePrivate(CreateInvitationsResponse * const q);

    void parseCreateInvitationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInvitationsResponse)
    Q_DISABLE_COPY(CreateInvitationsResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
