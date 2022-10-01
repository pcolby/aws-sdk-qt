// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDAUTHRESPONSE_P_H
#define QTAWS_UPDATEBACKENDAUTHRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendAuthResponse;

class UpdateBackendAuthResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit UpdateBackendAuthResponsePrivate(UpdateBackendAuthResponse * const q);

    void parseUpdateBackendAuthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBackendAuthResponse)
    Q_DISABLE_COPY(UpdateBackendAuthResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
