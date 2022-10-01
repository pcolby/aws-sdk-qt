// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLANALYTICSCATEGORYREQUEST_P_H
#define QTAWS_GETCALLANALYTICSCATEGORYREQUEST_P_H

#include "transcriberequest_p.h"
#include "getcallanalyticscategoryrequest.h"

namespace QtAws {
namespace Transcribe {

class GetCallAnalyticsCategoryRequest;

class GetCallAnalyticsCategoryRequestPrivate : public TranscribeRequestPrivate {

public:
    GetCallAnalyticsCategoryRequestPrivate(const TranscribeRequest::Action action,
                                   GetCallAnalyticsCategoryRequest * const q);
    GetCallAnalyticsCategoryRequestPrivate(const GetCallAnalyticsCategoryRequestPrivate &other,
                                   GetCallAnalyticsCategoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCallAnalyticsCategoryRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
