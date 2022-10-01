// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERRESPONSE_P_H
#define QTAWS_GETUSERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetUserResponse;

class GetUserResponsePrivate : public IamResponsePrivate {

public:

    explicit GetUserResponsePrivate(GetUserResponse * const q);

    void parseGetUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserResponse)
    Q_DISABLE_COPY(GetUserResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
