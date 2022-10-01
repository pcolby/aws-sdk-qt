// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSESSIONSREQUEST_P_H
#define QTAWS_SEARCHSESSIONSREQUEST_P_H

#include "wisdomrequest_p.h"
#include "searchsessionsrequest.h"

namespace QtAws {
namespace Wisdom {

class SearchSessionsRequest;

class SearchSessionsRequestPrivate : public WisdomRequestPrivate {

public:
    SearchSessionsRequestPrivate(const WisdomRequest::Action action,
                                   SearchSessionsRequest * const q);
    SearchSessionsRequestPrivate(const SearchSessionsRequestPrivate &other,
                                   SearchSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchSessionsRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
