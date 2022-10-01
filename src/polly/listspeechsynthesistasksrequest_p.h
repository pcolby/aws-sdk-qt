// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEECHSYNTHESISTASKSREQUEST_P_H
#define QTAWS_LISTSPEECHSYNTHESISTASKSREQUEST_P_H

#include "pollyrequest_p.h"
#include "listspeechsynthesistasksrequest.h"

namespace QtAws {
namespace Polly {

class ListSpeechSynthesisTasksRequest;

class ListSpeechSynthesisTasksRequestPrivate : public PollyRequestPrivate {

public:
    ListSpeechSynthesisTasksRequestPrivate(const PollyRequest::Action action,
                                   ListSpeechSynthesisTasksRequest * const q);
    ListSpeechSynthesisTasksRequestPrivate(const ListSpeechSynthesisTasksRequestPrivate &other,
                                   ListSpeechSynthesisTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSpeechSynthesisTasksRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
