// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPLIANCEITEMSREQUEST_P_H
#define QTAWS_PUTCOMPLIANCEITEMSREQUEST_P_H

#include "ssmrequest_p.h"
#include "putcomplianceitemsrequest.h"

namespace QtAws {
namespace Ssm {

class PutComplianceItemsRequest;

class PutComplianceItemsRequestPrivate : public SsmRequestPrivate {

public:
    PutComplianceItemsRequestPrivate(const SsmRequest::Action action,
                                   PutComplianceItemsRequest * const q);
    PutComplianceItemsRequestPrivate(const PutComplianceItemsRequestPrivate &other,
                                   PutComplianceItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutComplianceItemsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
