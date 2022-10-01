// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCUSTOMDATAIDENTIFIERSREQUEST_P_H
#define QTAWS_BATCHGETCUSTOMDATAIDENTIFIERSREQUEST_P_H

#include "macie2request_p.h"
#include "batchgetcustomdataidentifiersrequest.h"

namespace QtAws {
namespace Macie2 {

class BatchGetCustomDataIdentifiersRequest;

class BatchGetCustomDataIdentifiersRequestPrivate : public Macie2RequestPrivate {

public:
    BatchGetCustomDataIdentifiersRequestPrivate(const Macie2Request::Action action,
                                   BatchGetCustomDataIdentifiersRequest * const q);
    BatchGetCustomDataIdentifiersRequestPrivate(const BatchGetCustomDataIdentifiersRequestPrivate &other,
                                   BatchGetCustomDataIdentifiersRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetCustomDataIdentifiersRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
