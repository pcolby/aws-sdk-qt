// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERRESPONSE_P_H
#define QTAWS_GETUSERRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class GetUserResponse;

class GetUserResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit GetUserResponsePrivate(GetUserResponse * const q);

    void parseGetUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserResponse)
    Q_DISABLE_COPY(GetUserResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
