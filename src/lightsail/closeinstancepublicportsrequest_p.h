// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSEINSTANCEPUBLICPORTSREQUEST_P_H
#define QTAWS_CLOSEINSTANCEPUBLICPORTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "closeinstancepublicportsrequest.h"

namespace QtAws {
namespace Lightsail {

class CloseInstancePublicPortsRequest;

class CloseInstancePublicPortsRequestPrivate : public LightsailRequestPrivate {

public:
    CloseInstancePublicPortsRequestPrivate(const LightsailRequest::Action action,
                                   CloseInstancePublicPortsRequest * const q);
    CloseInstancePublicPortsRequestPrivate(const CloseInstancePublicPortsRequestPrivate &other,
                                   CloseInstancePublicPortsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CloseInstancePublicPortsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
