// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPORTTASKRESPONSE_P_H
#define QTAWS_STARTEXPORTTASKRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class StartExportTaskResponse;

class StartExportTaskResponsePrivate : public RdsResponsePrivate {

public:

    explicit StartExportTaskResponsePrivate(StartExportTaskResponse * const q);

    void parseStartExportTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartExportTaskResponse)
    Q_DISABLE_COPY(StartExportTaskResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
