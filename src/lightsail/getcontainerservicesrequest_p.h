// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICESREQUEST_P_H
#define QTAWS_GETCONTAINERSERVICESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getcontainerservicesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServicesRequest;

class GetContainerServicesRequestPrivate : public LightsailRequestPrivate {

public:
    GetContainerServicesRequestPrivate(const LightsailRequest::Action action,
                                   GetContainerServicesRequest * const q);
    GetContainerServicesRequestPrivate(const GetContainerServicesRequestPrivate &other,
                                   GetContainerServicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerServicesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
