// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHFROMINDEXREQUEST_P_H
#define QTAWS_DETACHFROMINDEXREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "detachfromindexrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachFromIndexRequest;

class DetachFromIndexRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    DetachFromIndexRequestPrivate(const CloudDirectoryRequest::Action action,
                                   DetachFromIndexRequest * const q);
    DetachFromIndexRequestPrivate(const DetachFromIndexRequestPrivate &other,
                                   DetachFromIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachFromIndexRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
