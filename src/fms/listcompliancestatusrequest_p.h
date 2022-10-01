// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPLIANCESTATUSREQUEST_P_H
#define QTAWS_LISTCOMPLIANCESTATUSREQUEST_P_H

#include "fmsrequest_p.h"
#include "listcompliancestatusrequest.h"

namespace QtAws {
namespace Fms {

class ListComplianceStatusRequest;

class ListComplianceStatusRequestPrivate : public FmsRequestPrivate {

public:
    ListComplianceStatusRequestPrivate(const FmsRequest::Action action,
                                   ListComplianceStatusRequest * const q);
    ListComplianceStatusRequestPrivate(const ListComplianceStatusRequestPrivate &other,
                                   ListComplianceStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComplianceStatusRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
