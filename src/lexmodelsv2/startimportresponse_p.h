// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTRESPONSE_P_H
#define QTAWS_STARTIMPORTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class StartImportResponse;

class StartImportResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit StartImportResponsePrivate(StartImportResponse * const q);

    void parseStartImportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartImportResponse)
    Q_DISABLE_COPY(StartImportResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
