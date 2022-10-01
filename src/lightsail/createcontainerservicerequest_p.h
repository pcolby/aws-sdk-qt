// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICEREQUEST_P_H
#define QTAWS_CREATECONTAINERSERVICEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createcontainerservicerequest.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceRequest;

class CreateContainerServiceRequestPrivate : public LightsailRequestPrivate {

public:
    CreateContainerServiceRequestPrivate(const LightsailRequest::Action action,
                                   CreateContainerServiceRequest * const q);
    CreateContainerServiceRequestPrivate(const CreateContainerServiceRequestPrivate &other,
                                   CreateContainerServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContainerServiceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
