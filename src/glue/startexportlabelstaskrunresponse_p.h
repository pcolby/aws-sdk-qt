// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPORTLABELSTASKRUNRESPONSE_P_H
#define QTAWS_STARTEXPORTLABELSTASKRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StartExportLabelsTaskRunResponse;

class StartExportLabelsTaskRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit StartExportLabelsTaskRunResponsePrivate(StartExportLabelsTaskRunResponse * const q);

    void parseStartExportLabelsTaskRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartExportLabelsTaskRunResponse)
    Q_DISABLE_COPY(StartExportLabelsTaskRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
