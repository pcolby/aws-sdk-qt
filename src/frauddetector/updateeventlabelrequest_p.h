// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTLABELREQUEST_P_H
#define QTAWS_UPDATEEVENTLABELREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updateeventlabelrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateEventLabelRequest;

class UpdateEventLabelRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateEventLabelRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateEventLabelRequest * const q);
    UpdateEventLabelRequestPrivate(const UpdateEventLabelRequestPrivate &other,
                                   UpdateEventLabelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEventLabelRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
