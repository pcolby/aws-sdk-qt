// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTRESPONSE_P_H
#define QTAWS_CREATEDEPLOYMENTRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class CreateDeploymentResponse;

class CreateDeploymentResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit CreateDeploymentResponsePrivate(CreateDeploymentResponse * const q);

    void parseCreateDeploymentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentResponse)
    Q_DISABLE_COPY(CreateDeploymentResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
