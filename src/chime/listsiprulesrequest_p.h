// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIPRULESREQUEST_P_H
#define QTAWS_LISTSIPRULESREQUEST_P_H

#include "chimerequest_p.h"
#include "listsiprulesrequest.h"

namespace QtAws {
namespace Chime {

class ListSipRulesRequest;

class ListSipRulesRequestPrivate : public ChimeRequestPrivate {

public:
    ListSipRulesRequestPrivate(const ChimeRequest::Action action,
                                   ListSipRulesRequest * const q);
    ListSipRulesRequestPrivate(const ListSipRulesRequestPrivate &other,
                                   ListSipRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSipRulesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
