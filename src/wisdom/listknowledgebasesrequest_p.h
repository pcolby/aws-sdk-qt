// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKNOWLEDGEBASESREQUEST_P_H
#define QTAWS_LISTKNOWLEDGEBASESREQUEST_P_H

#include "wisdomrequest_p.h"
#include "listknowledgebasesrequest.h"

namespace QtAws {
namespace Wisdom {

class ListKnowledgeBasesRequest;

class ListKnowledgeBasesRequestPrivate : public WisdomRequestPrivate {

public:
    ListKnowledgeBasesRequestPrivate(const WisdomRequest::Action action,
                                   ListKnowledgeBasesRequest * const q);
    ListKnowledgeBasesRequestPrivate(const ListKnowledgeBasesRequestPrivate &other,
                                   ListKnowledgeBasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListKnowledgeBasesRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
