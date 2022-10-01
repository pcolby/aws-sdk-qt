// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMONPREMISESINSTANCESRESPONSE_P_H
#define QTAWS_REMOVETAGSFROMONPREMISESINSTANCESRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class RemoveTagsFromOnPremisesInstancesResponse;

class RemoveTagsFromOnPremisesInstancesResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit RemoveTagsFromOnPremisesInstancesResponsePrivate(RemoveTagsFromOnPremisesInstancesResponse * const q);

    void parseRemoveTagsFromOnPremisesInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromOnPremisesInstancesResponse)
    Q_DISABLE_COPY(RemoveTagsFromOnPremisesInstancesResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
