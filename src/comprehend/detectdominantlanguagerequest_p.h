// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTDOMINANTLANGUAGEREQUEST_P_H
#define QTAWS_DETECTDOMINANTLANGUAGEREQUEST_P_H

#include "comprehendrequest_p.h"
#include "detectdominantlanguagerequest.h"

namespace QtAws {
namespace Comprehend {

class DetectDominantLanguageRequest;

class DetectDominantLanguageRequestPrivate : public ComprehendRequestPrivate {

public:
    DetectDominantLanguageRequestPrivate(const ComprehendRequest::Action action,
                                   DetectDominantLanguageRequest * const q);
    DetectDominantLanguageRequestPrivate(const DetectDominantLanguageRequestPrivate &other,
                                   DetectDominantLanguageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectDominantLanguageRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
