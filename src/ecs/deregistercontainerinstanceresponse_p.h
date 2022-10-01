// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCONTAINERINSTANCERESPONSE_P_H
#define QTAWS_DEREGISTERCONTAINERINSTANCERESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DeregisterContainerInstanceResponse;

class DeregisterContainerInstanceResponsePrivate : public EcsResponsePrivate {

public:

    explicit DeregisterContainerInstanceResponsePrivate(DeregisterContainerInstanceResponse * const q);

    void parseDeregisterContainerInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterContainerInstanceResponse)
    Q_DISABLE_COPY(DeregisterContainerInstanceResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
