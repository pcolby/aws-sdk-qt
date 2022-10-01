// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHEMERESPONSE_P_H
#define QTAWS_CREATETHEMERESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class CreateThemeResponse;

class CreateThemeResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit CreateThemeResponsePrivate(CreateThemeResponse * const q);

    void parseCreateThemeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateThemeResponse)
    Q_DISABLE_COPY(CreateThemeResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
