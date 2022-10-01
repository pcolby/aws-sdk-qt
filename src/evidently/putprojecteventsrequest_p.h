// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROJECTEVENTSREQUEST_P_H
#define QTAWS_PUTPROJECTEVENTSREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "putprojecteventsrequest.h"

namespace QtAws {
namespace Evidently {

class PutProjectEventsRequest;

class PutProjectEventsRequestPrivate : public EvidentlyRequestPrivate {

public:
    PutProjectEventsRequestPrivate(const EvidentlyRequest::Action action,
                                   PutProjectEventsRequest * const q);
    PutProjectEventsRequestPrivate(const PutProjectEventsRequestPrivate &other,
                                   PutProjectEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutProjectEventsRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
