// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORMODELSREQUEST_P_H
#define QTAWS_LISTDETECTORMODELSREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "listdetectormodelsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListDetectorModelsRequest;

class ListDetectorModelsRequestPrivate : public IoTEventsRequestPrivate {

public:
    ListDetectorModelsRequestPrivate(const IoTEventsRequest::Action action,
                                   ListDetectorModelsRequest * const q);
    ListDetectorModelsRequestPrivate(const ListDetectorModelsRequestPrivate &other,
                                   ListDetectorModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDetectorModelsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
