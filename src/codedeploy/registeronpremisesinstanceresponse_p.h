// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERONPREMISESINSTANCERESPONSE_P_H
#define QTAWS_REGISTERONPREMISESINSTANCERESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class RegisterOnPremisesInstanceResponse;

class RegisterOnPremisesInstanceResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit RegisterOnPremisesInstanceResponsePrivate(RegisterOnPremisesInstanceResponse * const q);

    void parseRegisterOnPremisesInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterOnPremisesInstanceResponse)
    Q_DISABLE_COPY(RegisterOnPremisesInstanceResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
