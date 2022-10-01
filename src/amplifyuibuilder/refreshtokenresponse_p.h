// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHTOKENRESPONSE_P_H
#define QTAWS_REFRESHTOKENRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class RefreshTokenResponse;

class RefreshTokenResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit RefreshTokenResponsePrivate(RefreshTokenResponse * const q);

    void parseRefreshTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RefreshTokenResponse)
    Q_DISABLE_COPY(RefreshTokenResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
