// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERPOLICYRESPONSE_P_H
#define QTAWS_GETUSERPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetUserPolicyResponse;

class GetUserPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit GetUserPolicyResponsePrivate(GetUserPolicyResponse * const q);

    void parseGetUserPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserPolicyResponse)
    Q_DISABLE_COPY(GetUserPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
