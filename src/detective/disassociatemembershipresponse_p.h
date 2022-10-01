// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERSHIPRESPONSE_P_H
#define QTAWS_DISASSOCIATEMEMBERSHIPRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class DisassociateMembershipResponse;

class DisassociateMembershipResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit DisassociateMembershipResponsePrivate(DisassociateMembershipResponse * const q);

    void parseDisassociateMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateMembershipResponse)
    Q_DISABLE_COPY(DisassociateMembershipResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
