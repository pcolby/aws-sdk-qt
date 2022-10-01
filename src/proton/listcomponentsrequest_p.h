// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSREQUEST_P_H
#define QTAWS_LISTCOMPONENTSREQUEST_P_H

#include "protonrequest_p.h"
#include "listcomponentsrequest.h"

namespace QtAws {
namespace Proton {

class ListComponentsRequest;

class ListComponentsRequestPrivate : public ProtonRequestPrivate {

public:
    ListComponentsRequestPrivate(const ProtonRequest::Action action,
                                   ListComponentsRequest * const q);
    ListComponentsRequestPrivate(const ListComponentsRequestPrivate &other,
                                   ListComponentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComponentsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
