// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLANGUAGESREQUEST_P_H
#define QTAWS_LISTLANGUAGESREQUEST_P_H

#include "translaterequest_p.h"
#include "listlanguagesrequest.h"

namespace QtAws {
namespace Translate {

class ListLanguagesRequest;

class ListLanguagesRequestPrivate : public TranslateRequestPrivate {

public:
    ListLanguagesRequestPrivate(const TranslateRequest::Action action,
                                   ListLanguagesRequest * const q);
    ListLanguagesRequestPrivate(const ListLanguagesRequestPrivate &other,
                                   ListLanguagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLanguagesRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
