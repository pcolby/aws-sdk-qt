// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKNOWLEDGEBASEREQUEST_P_H
#define QTAWS_CREATEKNOWLEDGEBASEREQUEST_P_H

#include "wisdomrequest_p.h"
#include "createknowledgebaserequest.h"

namespace QtAws {
namespace Wisdom {

class CreateKnowledgeBaseRequest;

class CreateKnowledgeBaseRequestPrivate : public WisdomRequestPrivate {

public:
    CreateKnowledgeBaseRequestPrivate(const WisdomRequest::Action action,
                                   CreateKnowledgeBaseRequest * const q);
    CreateKnowledgeBaseRequestPrivate(const CreateKnowledgeBaseRequestPrivate &other,
                                   CreateKnowledgeBaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateKnowledgeBaseRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
