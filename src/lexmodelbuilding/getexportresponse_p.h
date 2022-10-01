// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTRESPONSE_P_H
#define QTAWS_GETEXPORTRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetExportResponse;

class GetExportResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetExportResponsePrivate(GetExportResponse * const q);

    void parseGetExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExportResponse)
    Q_DISABLE_COPY(GetExportResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
