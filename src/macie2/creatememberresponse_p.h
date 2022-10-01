// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERRESPONSE_P_H
#define QTAWS_CREATEMEMBERRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class CreateMemberResponse;

class CreateMemberResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit CreateMemberResponsePrivate(CreateMemberResponse * const q);

    void parseCreateMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMemberResponse)
    Q_DISABLE_COPY(CreateMemberResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
