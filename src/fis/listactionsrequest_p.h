// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONSREQUEST_P_H
#define QTAWS_LISTACTIONSREQUEST_P_H

#include "fisrequest_p.h"
#include "listactionsrequest.h"

namespace QtAws {
namespace Fis {

class ListActionsRequest;

class ListActionsRequestPrivate : public FisRequestPrivate {

public:
    ListActionsRequestPrivate(const FisRequest::Action action,
                                   ListActionsRequest * const q);
    ListActionsRequestPrivate(const ListActionsRequestPrivate &other,
                                   ListActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListActionsRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
