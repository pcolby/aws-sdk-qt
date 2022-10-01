// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHWRITEREQUEST_P_H
#define QTAWS_BATCHWRITEREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "batchwriterequest.h"

namespace QtAws {
namespace CloudDirectory {

class BatchWriteRequest;

class BatchWriteRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    BatchWriteRequestPrivate(const CloudDirectoryRequest::Action action,
                                   BatchWriteRequest * const q);
    BatchWriteRequestPrivate(const BatchWriteRequestPrivate &other,
                                   BatchWriteRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchWriteRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
