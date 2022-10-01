// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOMEMBERRESPONSE_P_H
#define QTAWS_GETSTUDIOMEMBERRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetStudioMemberResponse;

class GetStudioMemberResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetStudioMemberResponsePrivate(GetStudioMemberResponse * const q);

    void parseGetStudioMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStudioMemberResponse)
    Q_DISABLE_COPY(GetStudioMemberResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
