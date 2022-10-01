// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSBYEVENTTYPEREQUEST_P_H
#define QTAWS_DELETEEVENTSBYEVENTTYPEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deleteeventsbyeventtyperequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventsByEventTypeRequest;

class DeleteEventsByEventTypeRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteEventsByEventTypeRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteEventsByEventTypeRequest * const q);
    DeleteEventsByEventTypeRequestPrivate(const DeleteEventsByEventTypeRequestPrivate &other,
                                   DeleteEventsByEventTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventsByEventTypeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
