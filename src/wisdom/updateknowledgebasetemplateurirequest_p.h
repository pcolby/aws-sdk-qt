// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKNOWLEDGEBASETEMPLATEURIREQUEST_P_H
#define QTAWS_UPDATEKNOWLEDGEBASETEMPLATEURIREQUEST_P_H

#include "wisdomrequest_p.h"
#include "updateknowledgebasetemplateurirequest.h"

namespace QtAws {
namespace Wisdom {

class UpdateKnowledgeBaseTemplateUriRequest;

class UpdateKnowledgeBaseTemplateUriRequestPrivate : public WisdomRequestPrivate {

public:
    UpdateKnowledgeBaseTemplateUriRequestPrivate(const WisdomRequest::Action action,
                                   UpdateKnowledgeBaseTemplateUriRequest * const q);
    UpdateKnowledgeBaseTemplateUriRequestPrivate(const UpdateKnowledgeBaseTemplateUriRequestPrivate &other,
                                   UpdateKnowledgeBaseTemplateUriRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateKnowledgeBaseTemplateUriRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
