// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHGROUPPOLICYRESPONSE_P_H
#define QTAWS_ATTACHGROUPPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class AttachGroupPolicyResponse;

class AttachGroupPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit AttachGroupPolicyResponsePrivate(AttachGroupPolicyResponse * const q);

    void parseAttachGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachGroupPolicyResponse)
    Q_DISABLE_COPY(AttachGroupPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
