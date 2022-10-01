// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHEMERESPONSE_P_H
#define QTAWS_DELETETHEMERESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class DeleteThemeResponse;

class DeleteThemeResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit DeleteThemeResponsePrivate(DeleteThemeResponse * const q);

    void parseDeleteThemeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteThemeResponse)
    Q_DISABLE_COPY(DeleteThemeResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
