// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCONTAINERINSTANCERESPONSE_P_H
#define QTAWS_REGISTERCONTAINERINSTANCERESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class RegisterContainerInstanceResponse;

class RegisterContainerInstanceResponsePrivate : public EcsResponsePrivate {

public:

    explicit RegisterContainerInstanceResponsePrivate(RegisterContainerInstanceResponse * const q);

    void parseRegisterContainerInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterContainerInstanceResponse)
    Q_DISABLE_COPY(RegisterContainerInstanceResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
