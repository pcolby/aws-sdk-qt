// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKREQUEST_P_H
#define QTAWS_DELETETASKREQUEST_P_H

#include "datasyncrequest_p.h"
#include "deletetaskrequest.h"

namespace QtAws {
namespace DataSync {

class DeleteTaskRequest;

class DeleteTaskRequestPrivate : public DataSyncRequestPrivate {

public:
    DeleteTaskRequestPrivate(const DataSyncRequest::Action action,
                                   DeleteTaskRequest * const q);
    DeleteTaskRequestPrivate(const DeleteTaskRequestPrivate &other,
                                   DeleteTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTaskRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
