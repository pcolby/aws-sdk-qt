// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDENVIRONMENTRESPONSE_P_H
#define QTAWS_GETBACKENDENVIRONMENTRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class GetBackendEnvironmentResponse;

class GetBackendEnvironmentResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit GetBackendEnvironmentResponsePrivate(GetBackendEnvironmentResponse * const q);

    void parseGetBackendEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackendEnvironmentResponse)
    Q_DISABLE_COPY(GetBackendEnvironmentResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
