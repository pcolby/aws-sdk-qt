// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENINSTANCEPUBLICPORTSREQUEST_P_H
#define QTAWS_OPENINSTANCEPUBLICPORTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "openinstancepublicportsrequest.h"

namespace QtAws {
namespace Lightsail {

class OpenInstancePublicPortsRequest;

class OpenInstancePublicPortsRequestPrivate : public LightsailRequestPrivate {

public:
    OpenInstancePublicPortsRequestPrivate(const LightsailRequest::Action action,
                                   OpenInstancePublicPortsRequest * const q);
    OpenInstancePublicPortsRequestPrivate(const OpenInstancePublicPortsRequestPrivate &other,
                                   OpenInstancePublicPortsRequest * const q);

private:
    Q_DECLARE_PUBLIC(OpenInstancePublicPortsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
