// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHCONTENTRESPONSE_P_H
#define QTAWS_SEARCHCONTENTRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class SearchContentResponse;

class SearchContentResponsePrivate : public WisdomResponsePrivate {

public:

    explicit SearchContentResponsePrivate(SearchContentResponse * const q);

    void parseSearchContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchContentResponse)
    Q_DISABLE_COPY(SearchContentResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
