// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTSRESPONSE_P_H
#define QTAWS_LISTIMPORTSRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class ListImportsResponse;

class ListImportsResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit ListImportsResponsePrivate(ListImportsResponse * const q);

    void parseListImportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImportsResponse)
    Q_DISABLE_COPY(ListImportsResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
