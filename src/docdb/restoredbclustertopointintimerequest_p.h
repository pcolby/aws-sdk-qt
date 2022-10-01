// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERTOPOINTINTIMEREQUEST_P_H
#define QTAWS_RESTOREDBCLUSTERTOPOINTINTIMEREQUEST_P_H

#include "docdbrequest_p.h"
#include "restoredbclustertopointintimerequest.h"

namespace QtAws {
namespace DocDb {

class RestoreDBClusterToPointInTimeRequest;

class RestoreDBClusterToPointInTimeRequestPrivate : public DocDbRequestPrivate {

public:
    RestoreDBClusterToPointInTimeRequestPrivate(const DocDbRequest::Action action,
                                   RestoreDBClusterToPointInTimeRequest * const q);
    RestoreDBClusterToPointInTimeRequestPrivate(const RestoreDBClusterToPointInTimeRequestPrivate &other,
                                   RestoreDBClusterToPointInTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDBClusterToPointInTimeRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
