// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAUTHRESPONSE_P_H
#define QTAWS_GETBACKENDAUTHRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAuthResponse;

class GetBackendAuthResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit GetBackendAuthResponsePrivate(GetBackendAuthResponse * const q);

    void parseGetBackendAuthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackendAuthResponse)
    Q_DISABLE_COPY(GetBackendAuthResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
