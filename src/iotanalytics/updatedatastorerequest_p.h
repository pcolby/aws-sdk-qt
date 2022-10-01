// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASTOREREQUEST_P_H
#define QTAWS_UPDATEDATASTOREREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "updatedatastorerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class UpdateDatastoreRequest;

class UpdateDatastoreRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    UpdateDatastoreRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   UpdateDatastoreRequest * const q);
    UpdateDatastoreRequestPrivate(const UpdateDatastoreRequestPrivate &other,
                                   UpdateDatastoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDatastoreRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
