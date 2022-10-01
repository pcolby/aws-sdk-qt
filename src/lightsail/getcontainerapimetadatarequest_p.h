// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERAPIMETADATAREQUEST_P_H
#define QTAWS_GETCONTAINERAPIMETADATAREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getcontainerapimetadatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerAPIMetadataRequest;

class GetContainerAPIMetadataRequestPrivate : public LightsailRequestPrivate {

public:
    GetContainerAPIMetadataRequestPrivate(const LightsailRequest::Action action,
                                   GetContainerAPIMetadataRequest * const q);
    GetContainerAPIMetadataRequestPrivate(const GetContainerAPIMetadataRequestPrivate &other,
                                   GetContainerAPIMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerAPIMetadataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
