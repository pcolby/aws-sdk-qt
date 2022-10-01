// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTRESPONSE_P_H
#define QTAWS_GETIMPORTRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetImportResponse;

class GetImportResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetImportResponsePrivate(GetImportResponse * const q);

    void parseGetImportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetImportResponse)
    Q_DISABLE_COPY(GetImportResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
