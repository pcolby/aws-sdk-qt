// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITFEEDBACKREQUEST_P_H
#define QTAWS_SUBMITFEEDBACKREQUEST_P_H

#include "kendrarequest_p.h"
#include "submitfeedbackrequest.h"

namespace QtAws {
namespace Kendra {

class SubmitFeedbackRequest;

class SubmitFeedbackRequestPrivate : public KendraRequestPrivate {

public:
    SubmitFeedbackRequestPrivate(const KendraRequest::Action action,
                                   SubmitFeedbackRequest * const q);
    SubmitFeedbackRequestPrivate(const SubmitFeedbackRequestPrivate &other,
                                   SubmitFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubmitFeedbackRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
