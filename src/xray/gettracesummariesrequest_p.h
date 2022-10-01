// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRACESUMMARIESREQUEST_P_H
#define QTAWS_GETTRACESUMMARIESREQUEST_P_H

#include "xrayrequest_p.h"
#include "gettracesummariesrequest.h"

namespace QtAws {
namespace XRay {

class GetTraceSummariesRequest;

class GetTraceSummariesRequestPrivate : public XRayRequestPrivate {

public:
    GetTraceSummariesRequestPrivate(const XRayRequest::Action action,
                                   GetTraceSummariesRequest * const q);
    GetTraceSummariesRequestPrivate(const GetTraceSummariesRequestPrivate &other,
                                   GetTraceSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTraceSummariesRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
