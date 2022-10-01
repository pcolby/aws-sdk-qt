// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTDATASTOREREQUEST_P_H
#define QTAWS_DELETEEVENTDATASTOREREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "deleteeventdatastorerequest.h"

namespace QtAws {
namespace CloudTrail {

class DeleteEventDataStoreRequest;

class DeleteEventDataStoreRequestPrivate : public CloudTrailRequestPrivate {

public:
    DeleteEventDataStoreRequestPrivate(const CloudTrailRequest::Action action,
                                   DeleteEventDataStoreRequest * const q);
    DeleteEventDataStoreRequestPrivate(const DeleteEventDataStoreRequestPrivate &other,
                                   DeleteEventDataStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventDataStoreRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
