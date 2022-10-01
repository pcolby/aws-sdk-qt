// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEXICONSRESPONSE_P_H
#define QTAWS_LISTLEXICONSRESPONSE_P_H

#include "pollyresponse_p.h"

namespace QtAws {
namespace Polly {

class ListLexiconsResponse;

class ListLexiconsResponsePrivate : public PollyResponsePrivate {

public:

    explicit ListLexiconsResponsePrivate(ListLexiconsResponse * const q);

    void parseListLexiconsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLexiconsResponse)
    Q_DISABLE_COPY(ListLexiconsResponsePrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
