// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEDETECTORREQUEST_P_H
#define QTAWS_BATCHUPDATEDETECTORREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "batchupdatedetectorrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchUpdateDetectorRequest;

class BatchUpdateDetectorRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    BatchUpdateDetectorRequestPrivate(const IoTEventsDataRequest::Action action,
                                   BatchUpdateDetectorRequest * const q);
    BatchUpdateDetectorRequestPrivate(const BatchUpdateDetectorRequestPrivate &other,
                                   BatchUpdateDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpdateDetectorRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
