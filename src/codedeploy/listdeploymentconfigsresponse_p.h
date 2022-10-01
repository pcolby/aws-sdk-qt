// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTCONFIGSRESPONSE_P_H
#define QTAWS_LISTDEPLOYMENTCONFIGSRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentConfigsResponse;

class ListDeploymentConfigsResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit ListDeploymentConfigsResponsePrivate(ListDeploymentConfigsResponse * const q);

    void parseListDeploymentConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeploymentConfigsResponse)
    Q_DISABLE_COPY(ListDeploymentConfigsResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
