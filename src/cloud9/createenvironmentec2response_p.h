// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTEC2RESPONSE_P_H
#define QTAWS_CREATEENVIRONMENTEC2RESPONSE_P_H

#include "cloud9response_p.h"

namespace QtAws {
namespace Cloud9 {

class CreateEnvironmentEC2Response;

class CreateEnvironmentEC2ResponsePrivate : public Cloud9ResponsePrivate {

public:

    explicit CreateEnvironmentEC2ResponsePrivate(CreateEnvironmentEC2Response * const q);

    void parseCreateEnvironmentEC2Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentEC2Response)
    Q_DISABLE_COPY(CreateEnvironmentEC2ResponsePrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
