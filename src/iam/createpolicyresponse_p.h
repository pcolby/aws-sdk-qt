// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYRESPONSE_P_H
#define QTAWS_CREATEPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreatePolicyResponse;

class CreatePolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit CreatePolicyResponsePrivate(CreatePolicyResponse * const q);

    void parseCreatePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePolicyResponse)
    Q_DISABLE_COPY(CreatePolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
