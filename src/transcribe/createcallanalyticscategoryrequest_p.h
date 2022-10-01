// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECALLANALYTICSCATEGORYREQUEST_P_H
#define QTAWS_CREATECALLANALYTICSCATEGORYREQUEST_P_H

#include "transcriberequest_p.h"
#include "createcallanalyticscategoryrequest.h"

namespace QtAws {
namespace Transcribe {

class CreateCallAnalyticsCategoryRequest;

class CreateCallAnalyticsCategoryRequestPrivate : public TranscribeRequestPrivate {

public:
    CreateCallAnalyticsCategoryRequestPrivate(const TranscribeRequest::Action action,
                                   CreateCallAnalyticsCategoryRequest * const q);
    CreateCallAnalyticsCategoryRequestPrivate(const CreateCallAnalyticsCategoryRequestPrivate &other,
                                   CreateCallAnalyticsCategoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCallAnalyticsCategoryRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
