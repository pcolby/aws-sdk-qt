// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOONPREMISESINSTANCESRESPONSE_P_H
#define QTAWS_ADDTAGSTOONPREMISESINSTANCESRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class AddTagsToOnPremisesInstancesResponse;

class AddTagsToOnPremisesInstancesResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit AddTagsToOnPremisesInstancesResponsePrivate(AddTagsToOnPremisesInstancesResponse * const q);

    void parseAddTagsToOnPremisesInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddTagsToOnPremisesInstancesResponse)
    Q_DISABLE_COPY(AddTagsToOnPremisesInstancesResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
