// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTOINDEXREQUEST_P_H
#define QTAWS_ATTACHTOINDEXREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "attachtoindexrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachToIndexRequest;

class AttachToIndexRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    AttachToIndexRequestPrivate(const CloudDirectoryRequest::Action action,
                                   AttachToIndexRequest * const q);
    AttachToIndexRequestPrivate(const AttachToIndexRequestPrivate &other,
                                   AttachToIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachToIndexRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
