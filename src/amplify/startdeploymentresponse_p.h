// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEPLOYMENTRESPONSE_P_H
#define QTAWS_STARTDEPLOYMENTRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class StartDeploymentResponse;

class StartDeploymentResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit StartDeploymentResponsePrivate(StartDeploymentResponse * const q);

    void parseStartDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDeploymentResponse)
    Q_DISABLE_COPY(StartDeploymentResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
