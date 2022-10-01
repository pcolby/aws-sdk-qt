// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBEXECUTIONSFORJOBREQUEST_P_H
#define QTAWS_LISTJOBEXECUTIONSFORJOBREQUEST_P_H

#include "iotrequest_p.h"
#include "listjobexecutionsforjobrequest.h"

namespace QtAws {
namespace IoT {

class ListJobExecutionsForJobRequest;

class ListJobExecutionsForJobRequestPrivate : public IoTRequestPrivate {

public:
    ListJobExecutionsForJobRequestPrivate(const IoTRequest::Action action,
                                   ListJobExecutionsForJobRequest * const q);
    ListJobExecutionsForJobRequestPrivate(const ListJobExecutionsForJobRequestPrivate &other,
                                   ListJobExecutionsForJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJobExecutionsForJobRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
