// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTLENSRESPONSE_P_H
#define QTAWS_EXPORTLENSRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class ExportLensResponse;

class ExportLensResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit ExportLensResponsePrivate(ExportLensResponse * const q);

    void parseExportLensResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportLensResponse)
    Q_DISABLE_COPY(ExportLensResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
