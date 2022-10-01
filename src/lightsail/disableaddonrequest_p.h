// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEADDONREQUEST_P_H
#define QTAWS_DISABLEADDONREQUEST_P_H

#include "lightsailrequest_p.h"
#include "disableaddonrequest.h"

namespace QtAws {
namespace Lightsail {

class DisableAddOnRequest;

class DisableAddOnRequestPrivate : public LightsailRequestPrivate {

public:
    DisableAddOnRequestPrivate(const LightsailRequest::Action action,
                                   DisableAddOnRequest * const q);
    DisableAddOnRequestPrivate(const DisableAddOnRequestPrivate &other,
                                   DisableAddOnRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableAddOnRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
