// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPORTRESPONSE_P_H
#define QTAWS_DELETEEXPORTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteExportResponse;

class DeleteExportResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteExportResponsePrivate(DeleteExportResponse * const q);

    void parseDeleteExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExportResponse)
    Q_DISABLE_COPY(DeleteExportResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
