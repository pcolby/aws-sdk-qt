// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONHDFSREQUEST_P_H
#define QTAWS_CREATELOCATIONHDFSREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocationhdfsrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationHdfsRequest;

class CreateLocationHdfsRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationHdfsRequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationHdfsRequest * const q);
    CreateLocationHdfsRequestPrivate(const CreateLocationHdfsRequestPrivate &other,
                                   CreateLocationHdfsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationHdfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
