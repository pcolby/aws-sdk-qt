// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHGROUPPOLICYRESPONSE_P_H
#define QTAWS_DETACHGROUPPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DetachGroupPolicyResponse;

class DetachGroupPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit DetachGroupPolicyResponsePrivate(DetachGroupPolicyResponse * const q);

    void parseDetachGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachGroupPolicyResponse)
    Q_DISABLE_COPY(DetachGroupPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
