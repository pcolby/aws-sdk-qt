// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEKNOWLEDGEBASETEMPLATEURIRESPONSE_P_H
#define QTAWS_REMOVEKNOWLEDGEBASETEMPLATEURIRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class RemoveKnowledgeBaseTemplateUriResponse;

class RemoveKnowledgeBaseTemplateUriResponsePrivate : public WisdomResponsePrivate {

public:

    explicit RemoveKnowledgeBaseTemplateUriResponsePrivate(RemoveKnowledgeBaseTemplateUriResponse * const q);

    void parseRemoveKnowledgeBaseTemplateUriResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveKnowledgeBaseTemplateUriResponse)
    Q_DISABLE_COPY(RemoveKnowledgeBaseTemplateUriResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
