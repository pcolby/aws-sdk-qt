// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERPOLICYRESPONSE_P_H
#define QTAWS_PUTUSERPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class PutUserPolicyResponse;

class PutUserPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit PutUserPolicyResponsePrivate(PutUserPolicyResponse * const q);

    void parsePutUserPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutUserPolicyResponse)
    Q_DISABLE_COPY(PutUserPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
