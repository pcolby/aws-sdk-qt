// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEXICONSREQUEST_P_H
#define QTAWS_LISTLEXICONSREQUEST_P_H

#include "pollyrequest_p.h"
#include "listlexiconsrequest.h"

namespace QtAws {
namespace Polly {

class ListLexiconsRequest;

class ListLexiconsRequestPrivate : public PollyRequestPrivate {

public:
    ListLexiconsRequestPrivate(const PollyRequest::Action action,
                                   ListLexiconsRequest * const q);
    ListLexiconsRequestPrivate(const ListLexiconsRequestPrivate &other,
                                   ListLexiconsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLexiconsRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
