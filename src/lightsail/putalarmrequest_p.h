// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALARMREQUEST_P_H
#define QTAWS_PUTALARMREQUEST_P_H

#include "lightsailrequest_p.h"
#include "putalarmrequest.h"

namespace QtAws {
namespace Lightsail {

class PutAlarmRequest;

class PutAlarmRequestPrivate : public LightsailRequestPrivate {

public:
    PutAlarmRequestPrivate(const LightsailRequest::Action action,
                                   PutAlarmRequest * const q);
    PutAlarmRequestPrivate(const PutAlarmRequestPrivate &other,
                                   PutAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAlarmRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
