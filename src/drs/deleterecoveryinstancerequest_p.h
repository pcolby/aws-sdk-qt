// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYINSTANCEREQUEST_P_H
#define QTAWS_DELETERECOVERYINSTANCEREQUEST_P_H

#include "drsrequest_p.h"
#include "deleterecoveryinstancerequest.h"

namespace QtAws {
namespace Drs {

class DeleteRecoveryInstanceRequest;

class DeleteRecoveryInstanceRequestPrivate : public DrsRequestPrivate {

public:
    DeleteRecoveryInstanceRequestPrivate(const DrsRequest::Action action,
                                   DeleteRecoveryInstanceRequest * const q);
    DeleteRecoveryInstanceRequestPrivate(const DeleteRecoveryInstanceRequestPrivate &other,
                                   DeleteRecoveryInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRecoveryInstanceRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
