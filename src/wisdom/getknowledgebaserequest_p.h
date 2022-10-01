// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKNOWLEDGEBASEREQUEST_P_H
#define QTAWS_GETKNOWLEDGEBASEREQUEST_P_H

#include "wisdomrequest_p.h"
#include "getknowledgebaserequest.h"

namespace QtAws {
namespace Wisdom {

class GetKnowledgeBaseRequest;

class GetKnowledgeBaseRequestPrivate : public WisdomRequestPrivate {

public:
    GetKnowledgeBaseRequestPrivate(const WisdomRequest::Action action,
                                   GetKnowledgeBaseRequest * const q);
    GetKnowledgeBaseRequestPrivate(const GetKnowledgeBaseRequestPrivate &other,
                                   GetKnowledgeBaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetKnowledgeBaseRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
