// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORSREQUEST_P_H
#define QTAWS_LISTDETECTORSREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "listdetectorsrequest.h"

namespace QtAws {
namespace IoTEventsData {

class ListDetectorsRequest;

class ListDetectorsRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    ListDetectorsRequestPrivate(const IoTEventsDataRequest::Action action,
                                   ListDetectorsRequest * const q);
    ListDetectorsRequestPrivate(const ListDetectorsRequestPrivate &other,
                                   ListDetectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDetectorsRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
