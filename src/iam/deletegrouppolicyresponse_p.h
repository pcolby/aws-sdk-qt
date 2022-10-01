// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPPOLICYRESPONSE_P_H
#define QTAWS_DELETEGROUPPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteGroupPolicyResponse;

class DeleteGroupPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteGroupPolicyResponsePrivate(DeleteGroupPolicyResponse * const q);

    void parseDeleteGroupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGroupPolicyResponse)
    Q_DISABLE_COPY(DeleteGroupPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
