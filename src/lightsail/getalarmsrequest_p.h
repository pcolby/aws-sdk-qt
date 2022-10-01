// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETALARMSREQUEST_P_H
#define QTAWS_GETALARMSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getalarmsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetAlarmsRequest;

class GetAlarmsRequestPrivate : public LightsailRequestPrivate {

public:
    GetAlarmsRequestPrivate(const LightsailRequest::Action action,
                                   GetAlarmsRequest * const q);
    GetAlarmsRequestPrivate(const GetAlarmsRequestPrivate &other,
                                   GetAlarmsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAlarmsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
