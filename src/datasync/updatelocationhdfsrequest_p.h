// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOCATIONHDFSREQUEST_P_H
#define QTAWS_UPDATELOCATIONHDFSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "updatelocationhdfsrequest.h"

namespace QtAws {
namespace DataSync {

class UpdateLocationHdfsRequest;

class UpdateLocationHdfsRequestPrivate : public DataSyncRequestPrivate {

public:
    UpdateLocationHdfsRequestPrivate(const DataSyncRequest::Action action,
                                   UpdateLocationHdfsRequest * const q);
    UpdateLocationHdfsRequestPrivate(const UpdateLocationHdfsRequestPrivate &other,
                                   UpdateLocationHdfsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLocationHdfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
