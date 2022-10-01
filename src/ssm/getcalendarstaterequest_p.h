// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALENDARSTATEREQUEST_P_H
#define QTAWS_GETCALENDARSTATEREQUEST_P_H

#include "ssmrequest_p.h"
#include "getcalendarstaterequest.h"

namespace QtAws {
namespace Ssm {

class GetCalendarStateRequest;

class GetCalendarStateRequestPrivate : public SsmRequestPrivate {

public:
    GetCalendarStateRequestPrivate(const SsmRequest::Action action,
                                   GetCalendarStateRequest * const q);
    GetCalendarStateRequestPrivate(const GetCalendarStateRequestPrivate &other,
                                   GetCalendarStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCalendarStateRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
