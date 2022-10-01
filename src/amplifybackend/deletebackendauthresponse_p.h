// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDAUTHRESPONSE_P_H
#define QTAWS_DELETEBACKENDAUTHRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendAuthResponse;

class DeleteBackendAuthResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit DeleteBackendAuthResponsePrivate(DeleteBackendAuthResponse * const q);

    void parseDeleteBackendAuthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackendAuthResponse)
    Q_DISABLE_COPY(DeleteBackendAuthResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
