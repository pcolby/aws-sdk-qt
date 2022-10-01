// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETACCOUNTSTATUSREQUEST_P_H
#define QTAWS_BATCHGETACCOUNTSTATUSREQUEST_P_H

#include "inspector2request_p.h"
#include "batchgetaccountstatusrequest.h"

namespace QtAws {
namespace Inspector2 {

class BatchGetAccountStatusRequest;

class BatchGetAccountStatusRequestPrivate : public Inspector2RequestPrivate {

public:
    BatchGetAccountStatusRequestPrivate(const Inspector2Request::Action action,
                                   BatchGetAccountStatusRequest * const q);
    BatchGetAccountStatusRequestPrivate(const BatchGetAccountStatusRequestPrivate &other,
                                   BatchGetAccountStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetAccountStatusRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
