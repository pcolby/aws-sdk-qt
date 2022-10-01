// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTDATASTOREREQUEST_P_H
#define QTAWS_UPDATEEVENTDATASTOREREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "updateeventdatastorerequest.h"

namespace QtAws {
namespace CloudTrail {

class UpdateEventDataStoreRequest;

class UpdateEventDataStoreRequestPrivate : public CloudTrailRequestPrivate {

public:
    UpdateEventDataStoreRequestPrivate(const CloudTrailRequest::Action action,
                                   UpdateEventDataStoreRequest * const q);
    UpdateEventDataStoreRequestPrivate(const UpdateEventDataStoreRequestPrivate &other,
                                   UpdateEventDataStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEventDataStoreRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
