// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERRESPONSE_P_H
#define QTAWS_ASSOCIATEMEMBERRESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class AssociateMemberResponse;

class AssociateMemberResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit AssociateMemberResponsePrivate(AssociateMemberResponse * const q);

    void parseAssociateMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateMemberResponse)
    Q_DISABLE_COPY(AssociateMemberResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
