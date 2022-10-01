// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGTARGETSREQUEST_P_H
#define QTAWS_GETSAMPLINGTARGETSREQUEST_P_H

#include "xrayrequest_p.h"
#include "getsamplingtargetsrequest.h"

namespace QtAws {
namespace XRay {

class GetSamplingTargetsRequest;

class GetSamplingTargetsRequestPrivate : public XRayRequestPrivate {

public:
    GetSamplingTargetsRequestPrivate(const XRayRequest::Action action,
                                   GetSamplingTargetsRequest * const q);
    GetSamplingTargetsRequestPrivate(const GetSamplingTargetsRequestPrivate &other,
                                   GetSamplingTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSamplingTargetsRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
