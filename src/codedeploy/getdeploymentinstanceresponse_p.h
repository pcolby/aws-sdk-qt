// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTINSTANCERESPONSE_P_H
#define QTAWS_GETDEPLOYMENTINSTANCERESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentInstanceResponse;

class GetDeploymentInstanceResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit GetDeploymentInstanceResponsePrivate(GetDeploymentInstanceResponse * const q);

    void parseGetDeploymentInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeploymentInstanceResponse)
    Q_DISABLE_COPY(GetDeploymentInstanceResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
