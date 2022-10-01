// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTOUTPUTSREQUEST_P_H
#define QTAWS_LISTCOMPONENTOUTPUTSREQUEST_P_H

#include "protonrequest_p.h"
#include "listcomponentoutputsrequest.h"

namespace QtAws {
namespace Proton {

class ListComponentOutputsRequest;

class ListComponentOutputsRequestPrivate : public ProtonRequestPrivate {

public:
    ListComponentOutputsRequestPrivate(const ProtonRequest::Action action,
                                   ListComponentOutputsRequest * const q);
    ListComponentOutputsRequestPrivate(const ListComponentOutputsRequestPrivate &other,
                                   ListComponentOutputsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComponentOutputsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
