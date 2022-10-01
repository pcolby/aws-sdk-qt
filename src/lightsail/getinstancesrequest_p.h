// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESREQUEST_P_H
#define QTAWS_GETINSTANCESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getinstancesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstancesRequest;

class GetInstancesRequestPrivate : public LightsailRequestPrivate {

public:
    GetInstancesRequestPrivate(const LightsailRequest::Action action,
                                   GetInstancesRequest * const q);
    GetInstancesRequestPrivate(const GetInstancesRequestPrivate &other,
                                   GetInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstancesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
