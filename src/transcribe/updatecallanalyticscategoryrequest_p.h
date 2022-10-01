// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECALLANALYTICSCATEGORYREQUEST_P_H
#define QTAWS_UPDATECALLANALYTICSCATEGORYREQUEST_P_H

#include "transcriberequest_p.h"
#include "updatecallanalyticscategoryrequest.h"

namespace QtAws {
namespace Transcribe {

class UpdateCallAnalyticsCategoryRequest;

class UpdateCallAnalyticsCategoryRequestPrivate : public TranscribeRequestPrivate {

public:
    UpdateCallAnalyticsCategoryRequestPrivate(const TranscribeRequest::Action action,
                                   UpdateCallAnalyticsCategoryRequest * const q);
    UpdateCallAnalyticsCategoryRequestPrivate(const UpdateCallAnalyticsCategoryRequestPrivate &other,
                                   UpdateCallAnalyticsCategoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCallAnalyticsCategoryRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
