// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBEXECUTIONSFORTHINGREQUEST_P_H
#define QTAWS_LISTJOBEXECUTIONSFORTHINGREQUEST_P_H

#include "iotrequest_p.h"
#include "listjobexecutionsforthingrequest.h"

namespace QtAws {
namespace IoT {

class ListJobExecutionsForThingRequest;

class ListJobExecutionsForThingRequestPrivate : public IoTRequestPrivate {

public:
    ListJobExecutionsForThingRequestPrivate(const IoTRequest::Action action,
                                   ListJobExecutionsForThingRequest * const q);
    ListJobExecutionsForThingRequestPrivate(const ListJobExecutionsForThingRequestPrivate &other,
                                   ListJobExecutionsForThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJobExecutionsForThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
