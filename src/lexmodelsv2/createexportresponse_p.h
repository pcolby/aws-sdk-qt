// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTRESPONSE_P_H
#define QTAWS_CREATEEXPORTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateExportResponse;

class CreateExportResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateExportResponsePrivate(CreateExportResponse * const q);

    void parseCreateExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExportResponse)
    Q_DISABLE_COPY(CreateExportResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
