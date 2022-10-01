// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHROLEPOLICYRESPONSE_P_H
#define QTAWS_ATTACHROLEPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class AttachRolePolicyResponse;

class AttachRolePolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit AttachRolePolicyResponsePrivate(AttachRolePolicyResponse * const q);

    void parseAttachRolePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachRolePolicyResponse)
    Q_DISABLE_COPY(AttachRolePolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
