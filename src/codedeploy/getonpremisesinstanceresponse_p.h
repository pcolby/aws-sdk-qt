// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETONPREMISESINSTANCERESPONSE_P_H
#define QTAWS_GETONPREMISESINSTANCERESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class GetOnPremisesInstanceResponse;

class GetOnPremisesInstanceResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit GetOnPremisesInstanceResponsePrivate(GetOnPremisesInstanceResponse * const q);

    void parseGetOnPremisesInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOnPremisesInstanceResponse)
    Q_DISABLE_COPY(GetOnPremisesInstanceResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
