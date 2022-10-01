// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCATIONREQUEST_P_H
#define QTAWS_DELETELOCATIONREQUEST_P_H

#include "datasyncrequest_p.h"
#include "deletelocationrequest.h"

namespace QtAws {
namespace DataSync {

class DeleteLocationRequest;

class DeleteLocationRequestPrivate : public DataSyncRequestPrivate {

public:
    DeleteLocationRequestPrivate(const DataSyncRequest::Action action,
                                   DeleteLocationRequest * const q);
    DeleteLocationRequestPrivate(const DeleteLocationRequestPrivate &other,
                                   DeleteLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLocationRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
