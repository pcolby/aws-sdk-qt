// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASTORESREQUEST_P_H
#define QTAWS_LISTDATASTORESREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "listdatastoresrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class ListDatastoresRequest;

class ListDatastoresRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    ListDatastoresRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   ListDatastoresRequest * const q);
    ListDatastoresRequestPrivate(const ListDatastoresRequestPrivate &other,
                                   ListDatastoresRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatastoresRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
