// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPIIENTITIESREQUEST_P_H
#define QTAWS_DETECTPIIENTITIESREQUEST_P_H

#include "comprehendrequest_p.h"
#include "detectpiientitiesrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectPiiEntitiesRequest;

class DetectPiiEntitiesRequestPrivate : public ComprehendRequestPrivate {

public:
    DetectPiiEntitiesRequestPrivate(const ComprehendRequest::Action action,
                                   DetectPiiEntitiesRequest * const q);
    DetectPiiEntitiesRequestPrivate(const DetectPiiEntitiesRequestPrivate &other,
                                   DetectPiiEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectPiiEntitiesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
