// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGPOLICYRESPONSE_P_H
#define QTAWS_TAGPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class TagPolicyResponse;

class TagPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit TagPolicyResponsePrivate(TagPolicyResponse * const q);

    void parseTagPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagPolicyResponse)
    Q_DISABLE_COPY(TagPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
