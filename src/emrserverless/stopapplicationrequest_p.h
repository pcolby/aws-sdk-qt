// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPLICATIONREQUEST_P_H
#define QTAWS_STOPAPPLICATIONREQUEST_P_H

#include "emrserverlessrequest_p.h"
#include "stopapplicationrequest.h"

namespace QtAws {
namespace EmrServerless {

class StopApplicationRequest;

class StopApplicationRequestPrivate : public EmrServerlessRequestPrivate {

public:
    StopApplicationRequestPrivate(const EmrServerlessRequest::Action action,
                                   StopApplicationRequest * const q);
    StopApplicationRequestPrivate(const StopApplicationRequestPrivate &other,
                                   StopApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopApplicationRequest)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
