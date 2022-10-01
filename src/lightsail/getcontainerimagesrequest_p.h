// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERIMAGESREQUEST_P_H
#define QTAWS_GETCONTAINERIMAGESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getcontainerimagesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerImagesRequest;

class GetContainerImagesRequestPrivate : public LightsailRequestPrivate {

public:
    GetContainerImagesRequestPrivate(const LightsailRequest::Action action,
                                   GetContainerImagesRequest * const q);
    GetContainerImagesRequestPrivate(const GetContainerImagesRequestPrivate &other,
                                   GetContainerImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerImagesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
