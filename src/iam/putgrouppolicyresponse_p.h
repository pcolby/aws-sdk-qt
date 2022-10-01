// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGROUPPOLICYRESPONSE_P_H
#define QTAWS_PUTGROUPPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class PutGroupPolicyResponse;

class PutGroupPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit PutGroupPolicyResponsePrivate(PutGroupPolicyResponse * const q);

    void parsePutGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutGroupPolicyResponse)
    Q_DISABLE_COPY(PutGroupPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
