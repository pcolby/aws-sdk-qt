// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORMODELVERSIONSREQUEST_P_H
#define QTAWS_LISTDETECTORMODELVERSIONSREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "listdetectormodelversionsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListDetectorModelVersionsRequest;

class ListDetectorModelVersionsRequestPrivate : public IoTEventsRequestPrivate {

public:
    ListDetectorModelVersionsRequestPrivate(const IoTEventsRequest::Action action,
                                   ListDetectorModelVersionsRequest * const q);
    ListDetectorModelVersionsRequestPrivate(const ListDetectorModelVersionsRequestPrivate &other,
                                   ListDetectorModelVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDetectorModelVersionsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
