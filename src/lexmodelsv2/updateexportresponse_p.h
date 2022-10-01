// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPORTRESPONSE_P_H
#define QTAWS_UPDATEEXPORTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateExportResponse;

class UpdateExportResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit UpdateExportResponsePrivate(UpdateExportResponse * const q);

    void parseUpdateExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateExportResponse)
    Q_DISABLE_COPY(UpdateExportResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
