// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROLEPOLICYRESPONSE_P_H
#define QTAWS_PUTROLEPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class PutRolePolicyResponse;

class PutRolePolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit PutRolePolicyResponsePrivate(PutRolePolicyResponse * const q);

    void parsePutRolePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRolePolicyResponse)
    Q_DISABLE_COPY(PutRolePolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
