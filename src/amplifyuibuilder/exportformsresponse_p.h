// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTFORMSRESPONSE_P_H
#define QTAWS_EXPORTFORMSRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportFormsResponse;

class ExportFormsResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit ExportFormsResponsePrivate(ExportFormsResponse * const q);

    void parseExportFormsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportFormsResponse)
    Q_DISABLE_COPY(ExportFormsResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
