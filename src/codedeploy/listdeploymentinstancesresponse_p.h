// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTINSTANCESRESPONSE_P_H
#define QTAWS_LISTDEPLOYMENTINSTANCESRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentInstancesResponse;

class ListDeploymentInstancesResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit ListDeploymentInstancesResponsePrivate(ListDeploymentInstancesResponse * const q);

    void parseListDeploymentInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeploymentInstancesResponse)
    Q_DISABLE_COPY(ListDeploymentInstancesResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
