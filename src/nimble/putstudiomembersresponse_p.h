// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTUDIOMEMBERSRESPONSE_P_H
#define QTAWS_PUTSTUDIOMEMBERSRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class PutStudioMembersResponse;

class PutStudioMembersResponsePrivate : public NimbleResponsePrivate {

public:

    explicit PutStudioMembersResponsePrivate(PutStudioMembersResponse * const q);

    void parsePutStudioMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutStudioMembersResponse)
    Q_DISABLE_COPY(PutStudioMembersResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
