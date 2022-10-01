// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECALLANALYTICSCATEGORYREQUEST_P_H
#define QTAWS_DELETECALLANALYTICSCATEGORYREQUEST_P_H

#include "transcriberequest_p.h"
#include "deletecallanalyticscategoryrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteCallAnalyticsCategoryRequest;

class DeleteCallAnalyticsCategoryRequestPrivate : public TranscribeRequestPrivate {

public:
    DeleteCallAnalyticsCategoryRequestPrivate(const TranscribeRequest::Action action,
                                   DeleteCallAnalyticsCategoryRequest * const q);
    DeleteCallAnalyticsCategoryRequestPrivate(const DeleteCallAnalyticsCategoryRequestPrivate &other,
                                   DeleteCallAnalyticsCategoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCallAnalyticsCategoryRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
