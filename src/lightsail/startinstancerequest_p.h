// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEREQUEST_P_H
#define QTAWS_STARTINSTANCEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "startinstancerequest.h"

namespace QtAws {
namespace Lightsail {

class StartInstanceRequest;

class StartInstanceRequestPrivate : public LightsailRequestPrivate {

public:
    StartInstanceRequestPrivate(const LightsailRequest::Action action,
                                   StartInstanceRequest * const q);
    StartInstanceRequestPrivate(const StartInstanceRequestPrivate &other,
                                   StartInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartInstanceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
