// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTASKDEFINITIONRESPONSE_P_H
#define QTAWS_REGISTERTASKDEFINITIONRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class RegisterTaskDefinitionResponse;

class RegisterTaskDefinitionResponsePrivate : public EcsResponsePrivate {

public:

    explicit RegisterTaskDefinitionResponsePrivate(RegisterTaskDefinitionResponse * const q);

    void parseRegisterTaskDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterTaskDefinitionResponse)
    Q_DISABLE_COPY(RegisterTaskDefinitionResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
