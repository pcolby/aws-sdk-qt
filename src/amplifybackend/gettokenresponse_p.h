// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOKENRESPONSE_P_H
#define QTAWS_GETTOKENRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class GetTokenResponse;

class GetTokenResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit GetTokenResponsePrivate(GetTokenResponse * const q);

    void parseGetTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTokenResponse)
    Q_DISABLE_COPY(GetTokenResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
