// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTKEYPHRASESREQUEST_P_H
#define QTAWS_BATCHDETECTKEYPHRASESREQUEST_P_H

#include "comprehendrequest_p.h"
#include "batchdetectkeyphrasesrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectKeyPhrasesRequest;

class BatchDetectKeyPhrasesRequestPrivate : public ComprehendRequestPrivate {

public:
    BatchDetectKeyPhrasesRequestPrivate(const ComprehendRequest::Action action,
                                   BatchDetectKeyPhrasesRequest * const q);
    BatchDetectKeyPhrasesRequestPrivate(const BatchDetectKeyPhrasesRequestPrivate &other,
                                   BatchDetectKeyPhrasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDetectKeyPhrasesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
