// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGROLERESPONSE_P_H
#define QTAWS_TAGROLERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class TagRoleResponse;

class TagRoleResponsePrivate : public IamResponsePrivate {

public:

    explicit TagRoleResponsePrivate(TagRoleResponse * const q);

    void parseTagRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagRoleResponse)
    Q_DISABLE_COPY(TagRoleResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
