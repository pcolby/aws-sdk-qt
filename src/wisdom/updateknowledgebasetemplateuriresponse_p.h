// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKNOWLEDGEBASETEMPLATEURIRESPONSE_P_H
#define QTAWS_UPDATEKNOWLEDGEBASETEMPLATEURIRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class UpdateKnowledgeBaseTemplateUriResponse;

class UpdateKnowledgeBaseTemplateUriResponsePrivate : public WisdomResponsePrivate {

public:

    explicit UpdateKnowledgeBaseTemplateUriResponsePrivate(UpdateKnowledgeBaseTemplateUriResponse * const q);

    void parseUpdateKnowledgeBaseTemplateUriResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateKnowledgeBaseTemplateUriResponse)
    Q_DISABLE_COPY(UpdateKnowledgeBaseTemplateUriResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
