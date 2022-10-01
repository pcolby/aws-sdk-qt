// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICELINKEDROLERESPONSE_P_H
#define QTAWS_CREATESERVICELINKEDROLERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreateServiceLinkedRoleResponse;

class CreateServiceLinkedRoleResponsePrivate : public IamResponsePrivate {

public:

    explicit CreateServiceLinkedRoleResponsePrivate(CreateServiceLinkedRoleResponse * const q);

    void parseCreateServiceLinkedRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateServiceLinkedRoleResponse)
    Q_DISABLE_COPY(CreateServiceLinkedRoleResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
