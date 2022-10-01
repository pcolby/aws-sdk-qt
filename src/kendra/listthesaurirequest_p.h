// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHESAURIREQUEST_P_H
#define QTAWS_LISTTHESAURIREQUEST_P_H

#include "kendrarequest_p.h"
#include "listthesaurirequest.h"

namespace QtAws {
namespace Kendra {

class ListThesauriRequest;

class ListThesauriRequestPrivate : public KendraRequestPrivate {

public:
    ListThesauriRequestPrivate(const KendraRequest::Action action,
                                   ListThesauriRequest * const q);
    ListThesauriRequestPrivate(const ListThesauriRequestPrivate &other,
                                   ListThesauriRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThesauriRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
