// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXCHANGECODEFORTOKENRESPONSE_P_H
#define QTAWS_EXCHANGECODEFORTOKENRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExchangeCodeForTokenResponse;

class ExchangeCodeForTokenResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit ExchangeCodeForTokenResponsePrivate(ExchangeCodeForTokenResponse * const q);

    void parseExchangeCodeForTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExchangeCodeForTokenResponse)
    Q_DISABLE_COPY(ExchangeCodeForTokenResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
