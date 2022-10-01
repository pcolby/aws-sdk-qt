// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEECHSYNTHESISTASKSRESPONSE_H
#define QTAWS_LISTSPEECHSYNTHESISTASKSRESPONSE_H

#include "pollyresponse.h"
#include "listspeechsynthesistasksrequest.h"

namespace QtAws {
namespace Polly {

class ListSpeechSynthesisTasksResponsePrivate;

class QTAWSPOLLY_EXPORT ListSpeechSynthesisTasksResponse : public PollyResponse {
    Q_OBJECT

public:
    ListSpeechSynthesisTasksResponse(const ListSpeechSynthesisTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSpeechSynthesisTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSpeechSynthesisTasksResponse)
    Q_DISABLE_COPY(ListSpeechSynthesisTasksResponse)

};

} // namespace Polly
} // namespace QtAws

#endif
