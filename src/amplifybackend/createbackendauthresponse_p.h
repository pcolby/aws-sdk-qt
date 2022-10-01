// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDAUTHRESPONSE_P_H
#define QTAWS_CREATEBACKENDAUTHRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendAuthResponse;

class CreateBackendAuthResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit CreateBackendAuthResponsePrivate(CreateBackendAuthResponse * const q);

    void parseCreateBackendAuthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBackendAuthResponse)
    Q_DISABLE_COPY(CreateBackendAuthResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
