// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESPONSEPLANSREQUEST_P_H
#define QTAWS_LISTRESPONSEPLANSREQUEST_P_H

#include "ssmincidentsrequest_p.h"
#include "listresponseplansrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListResponsePlansRequest;

class ListResponsePlansRequestPrivate : public SsmIncidentsRequestPrivate {

public:
    ListResponsePlansRequestPrivate(const SsmIncidentsRequest::Action action,
                                   ListResponsePlansRequest * const q);
    ListResponsePlansRequestPrivate(const ListResponsePlansRequestPrivate &other,
                                   ListResponsePlansRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResponsePlansRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
