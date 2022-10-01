// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHEMERESPONSE_P_H
#define QTAWS_GETTHEMERESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetThemeResponse;

class GetThemeResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit GetThemeResponsePrivate(GetThemeResponse * const q);

    void parseGetThemeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetThemeResponse)
    Q_DISABLE_COPY(GetThemeResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
