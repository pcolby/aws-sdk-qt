// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTAINERSERVICEREQUEST_P_H
#define QTAWS_UPDATECONTAINERSERVICEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "updatecontainerservicerequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateContainerServiceRequest;

class UpdateContainerServiceRequestPrivate : public LightsailRequestPrivate {

public:
    UpdateContainerServiceRequestPrivate(const LightsailRequest::Action action,
                                   UpdateContainerServiceRequest * const q);
    UpdateContainerServiceRequestPrivate(const UpdateContainerServiceRequestPrivate &other,
                                   UpdateContainerServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContainerServiceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
