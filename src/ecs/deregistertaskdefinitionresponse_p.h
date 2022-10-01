// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTASKDEFINITIONRESPONSE_P_H
#define QTAWS_DEREGISTERTASKDEFINITIONRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DeregisterTaskDefinitionResponse;

class DeregisterTaskDefinitionResponsePrivate : public EcsResponsePrivate {

public:

    explicit DeregisterTaskDefinitionResponsePrivate(DeregisterTaskDefinitionResponse * const q);

    void parseDeregisterTaskDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterTaskDefinitionResponse)
    Q_DISABLE_COPY(DeregisterTaskDefinitionResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
