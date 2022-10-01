// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASTOREREQUEST_P_H
#define QTAWS_DELETEDATASTOREREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "deletedatastorerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DeleteDatastoreRequest;

class DeleteDatastoreRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    DeleteDatastoreRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   DeleteDatastoreRequest * const q);
    DeleteDatastoreRequestPrivate(const DeleteDatastoreRequestPrivate &other,
                                   DeleteDatastoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDatastoreRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
