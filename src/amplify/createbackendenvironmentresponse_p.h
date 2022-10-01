// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDENVIRONMENTRESPONSE_P_H
#define QTAWS_CREATEBACKENDENVIRONMENTRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class CreateBackendEnvironmentResponse;

class CreateBackendEnvironmentResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit CreateBackendEnvironmentResponsePrivate(CreateBackendEnvironmentResponse * const q);

    void parseCreateBackendEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBackendEnvironmentResponse)
    Q_DISABLE_COPY(CreateBackendEnvironmentResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
