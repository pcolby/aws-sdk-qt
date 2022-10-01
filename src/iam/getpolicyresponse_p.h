// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYRESPONSE_P_H
#define QTAWS_GETPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetPolicyResponse;

class GetPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit GetPolicyResponsePrivate(GetPolicyResponse * const q);

    void parseGetPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPolicyResponse)
    Q_DISABLE_COPY(GetPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
