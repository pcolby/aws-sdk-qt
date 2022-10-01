// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONNFSREQUEST_P_H
#define QTAWS_UPDATELOCATIONNFSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "updatelocationnfsrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationNfsRequest;

class UpdateLocationNfsRequestPrivate : public DataSyncRequestPrivate {

public:
    UpdateLocationNfsRequestPrivate(const DataSyncRequest::Action action,
                                   UpdateLocationNfsRequest * const q);
    UpdateLocationNfsRequestPrivate(const UpdateLocationNfsRequestPrivate &other,
                                   UpdateLocationNfsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLocationNfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
