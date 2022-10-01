// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERTOPOINTINTIMEREQUEST_P_H
#define QTAWS_RESTOREDBCLUSTERTOPOINTINTIMEREQUEST_P_H

#include "neptunerequest_p.h"
#include "restoredbclustertopointintimerequest.h"

namespace QtAws {
namespace Neptune {

class RestoreDBClusterToPointInTimeRequest;

class RestoreDBClusterToPointInTimeRequestPrivate : public NeptuneRequestPrivate {

public:
    RestoreDBClusterToPointInTimeRequestPrivate(const NeptuneRequest::Action action,
                                   RestoreDBClusterToPointInTimeRequest * const q);
    RestoreDBClusterToPointInTimeRequestPrivate(const RestoreDBClusterToPointInTimeRequestPrivate &other,
                                   RestoreDBClusterToPointInTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDBClusterToPointInTimeRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
