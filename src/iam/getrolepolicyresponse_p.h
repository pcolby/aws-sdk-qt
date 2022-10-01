// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROLEPOLICYRESPONSE_P_H
#define QTAWS_GETROLEPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetRolePolicyResponse;

class GetRolePolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit GetRolePolicyResponsePrivate(GetRolePolicyResponse * const q);

    void parseGetRolePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRolePolicyResponse)
    Q_DISABLE_COPY(GetRolePolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
