// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDETECTORREQUEST_P_H
#define QTAWS_BATCHDELETEDETECTORREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "batchdeletedetectorrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchDeleteDetectorRequest;

class BatchDeleteDetectorRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    BatchDeleteDetectorRequestPrivate(const IoTEventsDataRequest::Action action,
                                   BatchDeleteDetectorRequest * const q);
    BatchDeleteDetectorRequestPrivate(const BatchDeleteDetectorRequestPrivate &other,
                                   BatchDeleteDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteDetectorRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
