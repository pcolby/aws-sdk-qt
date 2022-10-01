// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SKIPWAITTIMEFORINSTANCETERMINATIONRESPONSE_P_H
#define QTAWS_SKIPWAITTIMEFORINSTANCETERMINATIONRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class SkipWaitTimeForInstanceTerminationResponse;

class SkipWaitTimeForInstanceTerminationResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit SkipWaitTimeForInstanceTerminationResponsePrivate(SkipWaitTimeForInstanceTerminationResponse * const q);

    void parseSkipWaitTimeForInstanceTerminationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SkipWaitTimeForInstanceTerminationResponse)
    Q_DISABLE_COPY(SkipWaitTimeForInstanceTerminationResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
