// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKNOWLEDGEBASERESPONSE_P_H
#define QTAWS_CREATEKNOWLEDGEBASERESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class CreateKnowledgeBaseResponse;

class CreateKnowledgeBaseResponsePrivate : public WisdomResponsePrivate {

public:

    explicit CreateKnowledgeBaseResponsePrivate(CreateKnowledgeBaseResponse * const q);

    void parseCreateKnowledgeBaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateKnowledgeBaseResponse)
    Q_DISABLE_COPY(CreateKnowledgeBaseResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
