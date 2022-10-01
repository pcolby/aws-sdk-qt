// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTTYPEREQUEST_P_H
#define QTAWS_DELETEEVENTTYPEREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "deleteeventtyperequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventTypeRequest;

class DeleteEventTypeRequestPrivate : public FraudDetectorRequestPrivate {

public:
    DeleteEventTypeRequestPrivate(const FraudDetectorRequest::Action action,
                                   DeleteEventTypeRequest * const q);
    DeleteEventTypeRequestPrivate(const DeleteEventTypeRequestPrivate &other,
                                   DeleteEventTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventTypeRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
