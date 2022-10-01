// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUTTERANCESRESPONSE_P_H
#define QTAWS_DELETEUTTERANCESRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteUtterancesResponse;

class DeleteUtterancesResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteUtterancesResponsePrivate(DeleteUtterancesResponse * const q);

    void parseDeleteUtterancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUtterancesResponse)
    Q_DISABLE_COPY(DeleteUtterancesResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
