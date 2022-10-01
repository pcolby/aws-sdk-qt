// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTVERSIONARTIFACTREQUEST_P_H
#define QTAWS_GETCOMPONENTVERSIONARTIFACTREQUEST_P_H

#include "greengrassv2request_p.h"
#include "getcomponentversionartifactrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class GetComponentVersionArtifactRequest;

class GetComponentVersionArtifactRequestPrivate : public GreengrassV2RequestPrivate {

public:
    GetComponentVersionArtifactRequestPrivate(const GreengrassV2Request::Action action,
                                   GetComponentVersionArtifactRequest * const q);
    GetComponentVersionArtifactRequestPrivate(const GetComponentVersionArtifactRequestPrivate &other,
                                   GetComponentVersionArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComponentVersionArtifactRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
