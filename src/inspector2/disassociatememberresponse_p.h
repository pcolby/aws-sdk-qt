// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERRESPONSE_P_H
#define QTAWS_DISASSOCIATEMEMBERRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class DisassociateMemberResponse;

class DisassociateMemberResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit DisassociateMemberResponsePrivate(DisassociateMemberResponse * const q);

    void parseDisassociateMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateMemberResponse)
    Q_DISABLE_COPY(DisassociateMemberResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
