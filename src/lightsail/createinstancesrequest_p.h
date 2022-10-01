// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESREQUEST_P_H
#define QTAWS_CREATEINSTANCESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createinstancesrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateInstancesRequest;

class CreateInstancesRequestPrivate : public LightsailRequestPrivate {

public:
    CreateInstancesRequestPrivate(const LightsailRequest::Action action,
                                   CreateInstancesRequest * const q);
    CreateInstancesRequestPrivate(const CreateInstancesRequestPrivate &other,
                                   CreateInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstancesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
