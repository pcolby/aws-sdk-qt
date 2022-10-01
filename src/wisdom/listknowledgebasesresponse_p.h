// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKNOWLEDGEBASESRESPONSE_P_H
#define QTAWS_LISTKNOWLEDGEBASESRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class ListKnowledgeBasesResponse;

class ListKnowledgeBasesResponsePrivate : public WisdomResponsePrivate {

public:

    explicit ListKnowledgeBasesResponsePrivate(ListKnowledgeBasesResponse * const q);

    void parseListKnowledgeBasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListKnowledgeBasesResponse)
    Q_DISABLE_COPY(ListKnowledgeBasesResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
