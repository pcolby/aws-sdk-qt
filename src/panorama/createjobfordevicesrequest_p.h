// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBFORDEVICESREQUEST_P_H
#define QTAWS_CREATEJOBFORDEVICESREQUEST_P_H

#include "panoramarequest_p.h"
#include "createjobfordevicesrequest.h"

namespace QtAws {
namespace Panorama {

class CreateJobForDevicesRequest;

class CreateJobForDevicesRequestPrivate : public PanoramaRequestPrivate {

public:
    CreateJobForDevicesRequestPrivate(const PanoramaRequest::Action action,
                                   CreateJobForDevicesRequest * const q);
    CreateJobForDevicesRequestPrivate(const CreateJobForDevicesRequestPrivate &other,
                                   CreateJobForDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateJobForDevicesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
