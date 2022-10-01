// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKNOWLEDGEBASERESPONSE_P_H
#define QTAWS_GETKNOWLEDGEBASERESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class GetKnowledgeBaseResponse;

class GetKnowledgeBaseResponsePrivate : public WisdomResponsePrivate {

public:

    explicit GetKnowledgeBaseResponsePrivate(GetKnowledgeBaseResponse * const q);

    void parseGetKnowledgeBaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetKnowledgeBaseResponse)
    Q_DISABLE_COPY(GetKnowledgeBaseResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
