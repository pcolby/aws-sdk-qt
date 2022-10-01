// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDDECISIONTASKCOMPLETEDRESPONSE_H
#define QTAWS_RESPONDDECISIONTASKCOMPLETEDRESPONSE_H

#include "swfresponse.h"
#include "responddecisiontaskcompletedrequest.h"

namespace QtAws {
namespace Swf {

class RespondDecisionTaskCompletedResponsePrivate;

class QTAWSSWF_EXPORT RespondDecisionTaskCompletedResponse : public SwfResponse {
    Q_OBJECT

public:
    RespondDecisionTaskCompletedResponse(const RespondDecisionTaskCompletedRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RespondDecisionTaskCompletedRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RespondDecisionTaskCompletedResponse)
    Q_DISABLE_COPY(RespondDecisionTaskCompletedResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
