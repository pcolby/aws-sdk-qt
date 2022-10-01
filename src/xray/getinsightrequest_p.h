// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTREQUEST_P_H
#define QTAWS_GETINSIGHTREQUEST_P_H

#include "xrayrequest_p.h"
#include "getinsightrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightRequest;

class GetInsightRequestPrivate : public XRayRequestPrivate {

public:
    GetInsightRequestPrivate(const XRayRequest::Action action,
                                   GetInsightRequest * const q);
    GetInsightRequestPrivate(const GetInsightRequestPrivate &other,
                                   GetInsightRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInsightRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
