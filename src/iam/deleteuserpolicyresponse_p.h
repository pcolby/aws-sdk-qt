// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOLICYRESPONSE_P_H
#define QTAWS_DELETEUSERPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteUserPolicyResponse;

class DeleteUserPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteUserPolicyResponsePrivate(DeleteUserPolicyResponse * const q);

    void parseDeleteUserPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserPolicyResponse)
    Q_DISABLE_COPY(DeleteUserPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
