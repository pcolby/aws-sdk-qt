// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGROLERESPONSE_P_H
#define QTAWS_UNTAGROLERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UntagRoleResponse;

class UntagRoleResponsePrivate : public IamResponsePrivate {

public:

    explicit UntagRoleResponsePrivate(UntagRoleResponse * const q);

    void parseUntagRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagRoleResponse)
    Q_DISABLE_COPY(UntagRoleResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
