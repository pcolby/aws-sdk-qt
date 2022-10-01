// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMPORTRESPONSE_P_H
#define QTAWS_DELETEIMPORTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteImportResponse;

class DeleteImportResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteImportResponsePrivate(DeleteImportResponse * const q);

    void parseDeleteImportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteImportResponse)
    Q_DISABLE_COPY(DeleteImportResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
