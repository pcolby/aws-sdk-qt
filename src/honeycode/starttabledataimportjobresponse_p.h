// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTABLEDATAIMPORTJOBRESPONSE_P_H
#define QTAWS_STARTTABLEDATAIMPORTJOBRESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class StartTableDataImportJobResponse;

class StartTableDataImportJobResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit StartTableDataImportJobResponsePrivate(StartTableDataImportJobResponse * const q);

    void parseStartTableDataImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTableDataImportJobResponse)
    Q_DISABLE_COPY(StartTableDataImportJobResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
