// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTDATASTOREREQUEST_P_H
#define QTAWS_CREATEEVENTDATASTOREREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "createeventdatastorerequest.h"

namespace QtAws {
namespace CloudTrail {

class CreateEventDataStoreRequest;

class CreateEventDataStoreRequestPrivate : public CloudTrailRequestPrivate {

public:
    CreateEventDataStoreRequestPrivate(const CloudTrailRequest::Action action,
                                   CreateEventDataStoreRequest * const q);
    CreateEventDataStoreRequestPrivate(const CreateEventDataStoreRequestPrivate &other,
                                   CreateEventDataStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEventDataStoreRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
