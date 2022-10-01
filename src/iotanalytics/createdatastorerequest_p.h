// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASTOREREQUEST_P_H
#define QTAWS_CREATEDATASTOREREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "createdatastorerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CreateDatastoreRequest;

class CreateDatastoreRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    CreateDatastoreRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   CreateDatastoreRequest * const q);
    CreateDatastoreRequestPrivate(const CreateDatastoreRequestPrivate &other,
                                   CreateDatastoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDatastoreRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
