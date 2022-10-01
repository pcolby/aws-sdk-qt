// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHROLEPOLICYRESPONSE_P_H
#define QTAWS_DETACHROLEPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DetachRolePolicyResponse;

class DetachRolePolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit DetachRolePolicyResponsePrivate(DetachRolePolicyResponse * const q);

    void parseDetachRolePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachRolePolicyResponse)
    Q_DISABLE_COPY(DetachRolePolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
