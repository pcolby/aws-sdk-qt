// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMERESPONSE_P_H
#define QTAWS_UPDATETHEMERESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class UpdateThemeResponse;

class UpdateThemeResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit UpdateThemeResponsePrivate(UpdateThemeResponse * const q);

    void parseUpdateThemeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThemeResponse)
    Q_DISABLE_COPY(UpdateThemeResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
