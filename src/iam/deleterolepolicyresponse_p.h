// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEPOLICYRESPONSE_P_H
#define QTAWS_DELETEROLEPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteRolePolicyResponse;

class DeleteRolePolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteRolePolicyResponsePrivate(DeleteRolePolicyResponse * const q);

    void parseDeleteRolePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRolePolicyResponse)
    Q_DISABLE_COPY(DeleteRolePolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
