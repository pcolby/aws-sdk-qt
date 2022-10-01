// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREEVENTDATASTOREREQUEST_P_H
#define QTAWS_RESTOREEVENTDATASTOREREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "restoreeventdatastorerequest.h"

namespace QtAws {
namespace CloudTrail {

class RestoreEventDataStoreRequest;

class RestoreEventDataStoreRequestPrivate : public CloudTrailRequestPrivate {

public:
    RestoreEventDataStoreRequestPrivate(const CloudTrailRequest::Action action,
                                   RestoreEventDataStoreRequest * const q);
    RestoreEventDataStoreRequestPrivate(const RestoreEventDataStoreRequestPrivate &other,
                                   RestoreEventDataStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreEventDataStoreRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
