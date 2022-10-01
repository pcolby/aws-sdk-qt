// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONSMBREQUEST_P_H
#define QTAWS_CREATELOCATIONSMBREQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocationsmbrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationSmbRequest;

class CreateLocationSmbRequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationSmbRequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationSmbRequest * const q);
    CreateLocationSmbRequestPrivate(const CreateLocationSmbRequestPrivate &other,
                                   CreateLocationSmbRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationSmbRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
