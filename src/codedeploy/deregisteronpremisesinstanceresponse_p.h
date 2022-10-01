// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERONPREMISESINSTANCERESPONSE_P_H
#define QTAWS_DEREGISTERONPREMISESINSTANCERESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class DeregisterOnPremisesInstanceResponse;

class DeregisterOnPremisesInstanceResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit DeregisterOnPremisesInstanceResponsePrivate(DeregisterOnPremisesInstanceResponse * const q);

    void parseDeregisterOnPremisesInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterOnPremisesInstanceResponse)
    Q_DISABLE_COPY(DeregisterOnPremisesInstanceResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
