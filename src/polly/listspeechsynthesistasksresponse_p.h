// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEECHSYNTHESISTASKSRESPONSE_P_H
#define QTAWS_LISTSPEECHSYNTHESISTASKSRESPONSE_P_H

#include "pollyresponse_p.h"

namespace QtAws {
namespace Polly {

class ListSpeechSynthesisTasksResponse;

class ListSpeechSynthesisTasksResponsePrivate : public PollyResponsePrivate {

public:

    explicit ListSpeechSynthesisTasksResponsePrivate(ListSpeechSynthesisTasksResponse * const q);

    void parseListSpeechSynthesisTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSpeechSynthesisTasksResponse)
    Q_DISABLE_COPY(ListSpeechSynthesisTasksResponsePrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
