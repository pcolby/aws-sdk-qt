// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTLABELSTASKRUNRESPONSE_P_H
#define QTAWS_STARTIMPORTLABELSTASKRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StartImportLabelsTaskRunResponse;

class StartImportLabelsTaskRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit StartImportLabelsTaskRunResponsePrivate(StartImportLabelsTaskRunResponse * const q);

    void parseStartImportLabelsTaskRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartImportLabelsTaskRunResponse)
    Q_DISABLE_COPY(StartImportLabelsTaskRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
