// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCOMPONENTSRESPONSE_P_H
#define QTAWS_EXPORTCOMPONENTSRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportComponentsResponse;

class ExportComponentsResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit ExportComponentsResponsePrivate(ExportComponentsResponse * const q);

    void parseExportComponentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportComponentsResponse)
    Q_DISABLE_COPY(ExportComponentsResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
