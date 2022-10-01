// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEKNOWLEDGEBASETEMPLATEURIREQUEST_P_H
#define QTAWS_REMOVEKNOWLEDGEBASETEMPLATEURIREQUEST_P_H

#include "wisdomrequest_p.h"
#include "removeknowledgebasetemplateurirequest.h"

namespace QtAws {
namespace Wisdom {

class RemoveKnowledgeBaseTemplateUriRequest;

class RemoveKnowledgeBaseTemplateUriRequestPrivate : public WisdomRequestPrivate {

public:
    RemoveKnowledgeBaseTemplateUriRequestPrivate(const WisdomRequest::Action action,
                                   RemoveKnowledgeBaseTemplateUriRequest * const q);
    RemoveKnowledgeBaseTemplateUriRequestPrivate(const RemoveKnowledgeBaseTemplateUriRequestPrivate &other,
                                   RemoveKnowledgeBaseTemplateUriRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveKnowledgeBaseTemplateUriRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
