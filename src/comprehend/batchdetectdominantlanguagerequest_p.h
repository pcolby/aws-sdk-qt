// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTDOMINANTLANGUAGEREQUEST_P_H
#define QTAWS_BATCHDETECTDOMINANTLANGUAGEREQUEST_P_H

#include "comprehendrequest_p.h"
#include "batchdetectdominantlanguagerequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectDominantLanguageRequest;

class BatchDetectDominantLanguageRequestPrivate : public ComprehendRequestPrivate {

public:
    BatchDetectDominantLanguageRequestPrivate(const ComprehendRequest::Action action,
                                   BatchDetectDominantLanguageRequest * const q);
    BatchDetectDominantLanguageRequestPrivate(const BatchDetectDominantLanguageRequestPrivate &other,
                                   BatchDetectDominantLanguageRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDetectDominantLanguageRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
