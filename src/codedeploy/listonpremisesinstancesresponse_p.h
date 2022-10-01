// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTONPREMISESINSTANCESRESPONSE_P_H
#define QTAWS_LISTONPREMISESINSTANCESRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class ListOnPremisesInstancesResponse;

class ListOnPremisesInstancesResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit ListOnPremisesInstancesResponsePrivate(ListOnPremisesInstancesResponse * const q);

    void parseListOnPremisesInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOnPremisesInstancesResponse)
    Q_DISABLE_COPY(ListOnPremisesInstancesResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
