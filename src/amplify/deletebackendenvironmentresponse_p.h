// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDENVIRONMENTRESPONSE_P_H
#define QTAWS_DELETEBACKENDENVIRONMENTRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class DeleteBackendEnvironmentResponse;

class DeleteBackendEnvironmentResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit DeleteBackendEnvironmentResponsePrivate(DeleteBackendEnvironmentResponse * const q);

    void parseDeleteBackendEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackendEnvironmentResponse)
    Q_DISABLE_COPY(DeleteBackendEnvironmentResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
