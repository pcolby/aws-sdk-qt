// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORDECISIONTASKRESPONSE_H
#define QTAWS_POLLFORDECISIONTASKRESPONSE_H

#include "swfresponse.h"
#include "pollfordecisiontaskrequest.h"

namespace QtAws {
namespace Swf {

class PollForDecisionTaskResponsePrivate;

class QTAWSSWF_EXPORT PollForDecisionTaskResponse : public SwfResponse {
    Q_OBJECT

public:
    PollForDecisionTaskResponse(const PollForDecisionTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PollForDecisionTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PollForDecisionTaskResponse)
    Q_DISABLE_COPY(PollForDecisionTaskResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
