// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHUSERPOLICYRESPONSE_P_H
#define QTAWS_ATTACHUSERPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class AttachUserPolicyResponse;

class AttachUserPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit AttachUserPolicyResponsePrivate(AttachUserPolicyResponse * const q);

    void parseAttachUserPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachUserPolicyResponse)
    Q_DISABLE_COPY(AttachUserPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
