// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHREADREQUEST_P_H
#define QTAWS_BATCHREADREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "batchreadrequest.h"

namespace QtAws {
namespace CloudDirectory {

class BatchReadRequest;

class BatchReadRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    BatchReadRequestPrivate(const CloudDirectoryRequest::Action action,
                                   BatchReadRequest * const q);
    BatchReadRequestPrivate(const BatchReadRequestPrivate &other,
                                   BatchReadRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchReadRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
