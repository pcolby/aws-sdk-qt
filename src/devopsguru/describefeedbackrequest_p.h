// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEEDBACKREQUEST_P_H
#define QTAWS_DESCRIBEFEEDBACKREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describefeedbackrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeFeedbackRequest;

class DescribeFeedbackRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeFeedbackRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeFeedbackRequest * const q);
    DescribeFeedbackRequestPrivate(const DescribeFeedbackRequestPrivate &other,
                                   DescribeFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFeedbackRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
