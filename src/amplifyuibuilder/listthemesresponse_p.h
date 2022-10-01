// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMESRESPONSE_P_H
#define QTAWS_LISTTHEMESRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListThemesResponse;

class ListThemesResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit ListThemesResponsePrivate(ListThemesResponse * const q);

    void parseListThemesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThemesResponse)
    Q_DISABLE_COPY(ListThemesResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
