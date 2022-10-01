// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPLICATIONREQUEST_P_H
#define QTAWS_STOPAPPLICATIONREQUEST_P_H

#include "m2request_p.h"
#include "stopapplicationrequest.h"

namespace QtAws {
namespace M2 {

class StopApplicationRequest;

class StopApplicationRequestPrivate : public M2RequestPrivate {

public:
    StopApplicationRequestPrivate(const M2Request::Action action,
                                   StopApplicationRequest * const q);
    StopApplicationRequestPrivate(const StopApplicationRequestPrivate &other,
                                   StopApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopApplicationRequest)

};

} // namespace M2
} // namespace QtAws

#endif
