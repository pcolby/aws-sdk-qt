// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFAQSREQUEST_P_H
#define QTAWS_LISTFAQSREQUEST_P_H

#include "kendrarequest_p.h"
#include "listfaqsrequest.h"

namespace QtAws {
namespace Kendra {

class ListFaqsRequest;

class ListFaqsRequestPrivate : public KendraRequestPrivate {

public:
    ListFaqsRequestPrivate(const KendraRequest::Action action,
                                   ListFaqsRequest * const q);
    ListFaqsRequestPrivate(const ListFaqsRequestPrivate &other,
                                   ListFaqsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFaqsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
