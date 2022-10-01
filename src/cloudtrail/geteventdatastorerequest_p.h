// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTDATASTOREREQUEST_P_H
#define QTAWS_GETEVENTDATASTOREREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "geteventdatastorerequest.h"

namespace QtAws {
namespace CloudTrail {

class GetEventDataStoreRequest;

class GetEventDataStoreRequestPrivate : public CloudTrailRequestPrivate {

public:
    GetEventDataStoreRequestPrivate(const CloudTrailRequest::Action action,
                                   GetEventDataStoreRequest * const q);
    GetEventDataStoreRequestPrivate(const GetEventDataStoreRequestPrivate &other,
                                   GetEventDataStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventDataStoreRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
