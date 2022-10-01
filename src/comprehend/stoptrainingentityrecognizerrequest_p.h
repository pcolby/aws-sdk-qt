// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGENTITYRECOGNIZERREQUEST_P_H
#define QTAWS_STOPTRAININGENTITYRECOGNIZERREQUEST_P_H

#include "comprehendrequest_p.h"
#include "stoptrainingentityrecognizerrequest.h"

namespace QtAws {
namespace Comprehend {

class StopTrainingEntityRecognizerRequest;

class StopTrainingEntityRecognizerRequestPrivate : public ComprehendRequestPrivate {

public:
    StopTrainingEntityRecognizerRequestPrivate(const ComprehendRequest::Action action,
                                   StopTrainingEntityRecognizerRequest * const q);
    StopTrainingEntityRecognizerRequestPrivate(const StopTrainingEntityRecognizerRequestPrivate &other,
                                   StopTrainingEntityRecognizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopTrainingEntityRecognizerRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
