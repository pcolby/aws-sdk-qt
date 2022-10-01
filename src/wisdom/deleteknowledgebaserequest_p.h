// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKNOWLEDGEBASEREQUEST_P_H
#define QTAWS_DELETEKNOWLEDGEBASEREQUEST_P_H

#include "wisdomrequest_p.h"
#include "deleteknowledgebaserequest.h"

namespace QtAws {
namespace Wisdom {

class DeleteKnowledgeBaseRequest;

class DeleteKnowledgeBaseRequestPrivate : public WisdomRequestPrivate {

public:
    DeleteKnowledgeBaseRequestPrivate(const WisdomRequest::Action action,
                                   DeleteKnowledgeBaseRequest * const q);
    DeleteKnowledgeBaseRequestPrivate(const DeleteKnowledgeBaseRequestPrivate &other,
                                   DeleteKnowledgeBaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteKnowledgeBaseRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
