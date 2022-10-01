// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTREQUEST_P_H
#define QTAWS_DELETEEVENTREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deleteeventrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventRequest;

class DeleteEventRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteEventRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteEventRequest * const q);
    DeleteEventRequestPrivate(const DeleteEventRequestPrivate &other,
                                   DeleteEventRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
