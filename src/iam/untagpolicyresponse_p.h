// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGPOLICYRESPONSE_P_H
#define QTAWS_UNTAGPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UntagPolicyResponse;

class UntagPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit UntagPolicyResponsePrivate(UntagPolicyResponse * const q);

    void parseUntagPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagPolicyResponse)
    Q_DISABLE_COPY(UntagPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
