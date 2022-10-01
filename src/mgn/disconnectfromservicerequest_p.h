// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTFROMSERVICEREQUEST_P_H
#define QTAWS_DISCONNECTFROMSERVICEREQUEST_P_H

#include "mgnrequest_p.h"
#include "disconnectfromservicerequest.h"

namespace QtAws {
namespace Mgn {

class DisconnectFromServiceRequest;

class DisconnectFromServiceRequestPrivate : public MgnRequestPrivate {

public:
    DisconnectFromServiceRequestPrivate(const MgnRequest::Action action,
                                   DisconnectFromServiceRequest * const q);
    DisconnectFromServiceRequestPrivate(const DisconnectFromServiceRequestPrivate &other,
                                   DisconnectFromServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisconnectFromServiceRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
