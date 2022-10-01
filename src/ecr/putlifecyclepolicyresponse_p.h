// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEPOLICYRESPONSE_P_H
#define QTAWS_PUTLIFECYCLEPOLICYRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class PutLifecyclePolicyResponse;

class PutLifecyclePolicyResponsePrivate : public EcrResponsePrivate {

public:

    explicit PutLifecyclePolicyResponsePrivate(PutLifecyclePolicyResponse * const q);

    void parsePutLifecyclePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLifecyclePolicyResponse)
    Q_DISABLE_COPY(PutLifecyclePolicyResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
