// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKREQUEST_P_H
#define QTAWS_CREATETASKREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createtaskrequest.h"

namespace QtAws {
namespace DataSync {

class CreateTaskRequest;

class CreateTaskRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateTaskRequestPrivate(const DataSyncRequest::Action action,
                                   CreateTaskRequest * const q);
    CreateTaskRequestPrivate(const CreateTaskRequestPrivate &other,
                                   CreateTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTaskRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
