// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTTHEMESRESPONSE_P_H
#define QTAWS_EXPORTTHEMESRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportThemesResponse;

class ExportThemesResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit ExportThemesResponsePrivate(ExportThemesResponse * const q);

    void parseExportThemesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportThemesResponse)
    Q_DISABLE_COPY(ExportThemesResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
