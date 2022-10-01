// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTKEYPHRASESREQUEST_P_H
#define QTAWS_DETECTKEYPHRASESREQUEST_P_H

#include "comprehendrequest_p.h"
#include "detectkeyphrasesrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectKeyPhrasesRequest;

class DetectKeyPhrasesRequestPrivate : public ComprehendRequestPrivate {

public:
    DetectKeyPhrasesRequestPrivate(const ComprehendRequest::Action action,
                                   DetectKeyPhrasesRequest * const q);
    DetectKeyPhrasesRequestPrivate(const DetectKeyPhrasesRequestPrivate &other,
                                   DetectKeyPhrasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectKeyPhrasesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
