// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHENABLESTANDARDSREQUEST_P_H
#define QTAWS_BATCHENABLESTANDARDSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "batchenablestandardsrequest.h"

namespace QtAws {
namespace SecurityHub {

class BatchEnableStandardsRequest;

class BatchEnableStandardsRequestPrivate : public SecurityHubRequestPrivate {

public:
    BatchEnableStandardsRequestPrivate(const SecurityHubRequest::Action action,
                                   BatchEnableStandardsRequest * const q);
    BatchEnableStandardsRequestPrivate(const BatchEnableStandardsRequestPrivate &other,
                                   BatchEnableStandardsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchEnableStandardsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
