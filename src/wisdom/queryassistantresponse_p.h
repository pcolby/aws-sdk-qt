// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYASSISTANTRESPONSE_P_H
#define QTAWS_QUERYASSISTANTRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class QueryAssistantResponse;

class QueryAssistantResponsePrivate : public WisdomResponsePrivate {

public:

    explicit QueryAssistantResponsePrivate(QueryAssistantResponse * const q);

    void parseQueryAssistantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(QueryAssistantResponse)
    Q_DISABLE_COPY(QueryAssistantResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
