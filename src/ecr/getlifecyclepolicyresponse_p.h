// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICYRESPONSE_P_H
#define QTAWS_GETLIFECYCLEPOLICYRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class GetLifecyclePolicyResponse;

class GetLifecyclePolicyResponsePrivate : public EcrResponsePrivate {

public:

    explicit GetLifecyclePolicyResponsePrivate(GetLifecyclePolicyResponse * const q);

    void parseGetLifecyclePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLifecyclePolicyResponse)
    Q_DISABLE_COPY(GetLifecyclePolicyResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
