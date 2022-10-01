// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHCONTENTREQUEST_P_H
#define QTAWS_SEARCHCONTENTREQUEST_P_H

#include "wisdomrequest_p.h"
#include "searchcontentrequest.h"

namespace QtAws {
namespace Wisdom {

class SearchContentRequest;

class SearchContentRequestPrivate : public WisdomRequestPrivate {

public:
    SearchContentRequestPrivate(const WisdomRequest::Action action,
                                   SearchContentRequest * const q);
    SearchContentRequestPrivate(const SearchContentRequestPrivate &other,
                                   SearchContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchContentRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
