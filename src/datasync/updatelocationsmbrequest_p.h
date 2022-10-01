// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONSMBREQUEST_P_H
#define QTAWS_UPDATELOCATIONSMBREQUEST_P_H

#include "datasyncrequest_p.h"
#include "updatelocationsmbrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationSmbRequest;

class UpdateLocationSmbRequestPrivate : public DataSyncRequestPrivate {

public:
    UpdateLocationSmbRequestPrivate(const DataSyncRequest::Action action,
                                   UpdateLocationSmbRequest * const q);
    UpdateLocationSmbRequestPrivate(const UpdateLocationSmbRequestPrivate &other,
                                   UpdateLocationSmbRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLocationSmbRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
