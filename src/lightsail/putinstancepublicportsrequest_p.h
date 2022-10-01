// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSTANCEPUBLICPORTSREQUEST_P_H
#define QTAWS_PUTINSTANCEPUBLICPORTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "putinstancepublicportsrequest.h"

namespace QtAws {
namespace Lightsail {

class PutInstancePublicPortsRequest;

class PutInstancePublicPortsRequestPrivate : public LightsailRequestPrivate {

public:
    PutInstancePublicPortsRequestPrivate(const LightsailRequest::Action action,
                                   PutInstancePublicPortsRequest * const q);
    PutInstancePublicPortsRequestPrivate(const PutInstancePublicPortsRequestPrivate &other,
                                   PutInstancePublicPortsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutInstancePublicPortsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
