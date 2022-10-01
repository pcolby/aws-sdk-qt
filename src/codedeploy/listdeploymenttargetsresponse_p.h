// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTTARGETSRESPONSE_P_H
#define QTAWS_LISTDEPLOYMENTTARGETSRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentTargetsResponse;

class ListDeploymentTargetsResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit ListDeploymentTargetsResponsePrivate(ListDeploymentTargetsResponse * const q);

    void parseListDeploymentTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeploymentTargetsResponse)
    Q_DISABLE_COPY(ListDeploymentTargetsResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
