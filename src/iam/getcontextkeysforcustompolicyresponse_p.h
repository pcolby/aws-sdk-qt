// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTEXTKEYSFORCUSTOMPOLICYRESPONSE_P_H
#define QTAWS_GETCONTEXTKEYSFORCUSTOMPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetContextKeysForCustomPolicyResponse;

class GetContextKeysForCustomPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit GetContextKeysForCustomPolicyResponsePrivate(GetContextKeysForCustomPolicyResponse * const q);

    void parseGetContextKeysForCustomPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContextKeysForCustomPolicyResponse)
    Q_DISABLE_COPY(GetContextKeysForCustomPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
