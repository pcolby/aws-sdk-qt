// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPPOLICYRESPONSE_P_H
#define QTAWS_GETGROUPPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetGroupPolicyResponse;

class GetGroupPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit GetGroupPolicyResponsePrivate(GetGroupPolicyResponse * const q);

    void parseGetGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupPolicyResponse)
    Q_DISABLE_COPY(GetGroupPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
