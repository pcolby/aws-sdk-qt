// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISABLESTANDARDSREQUEST_P_H
#define QTAWS_BATCHDISABLESTANDARDSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "batchdisablestandardsrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchDisableStandardsRequest;

class BatchDisableStandardsRequestPrivate : public SecurityHubRequestPrivate {

public:
    BatchDisableStandardsRequestPrivate(const SecurityHubRequest::Action action,
                                   BatchDisableStandardsRequest * const q);
    BatchDisableStandardsRequestPrivate(const BatchDisableStandardsRequestPrivate &other,
                                   BatchDisableStandardsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDisableStandardsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
