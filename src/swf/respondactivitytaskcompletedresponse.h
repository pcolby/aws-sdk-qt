// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKCOMPLETEDRESPONSE_H
#define QTAWS_RESPONDACTIVITYTASKCOMPLETEDRESPONSE_H

#include "swfresponse.h"
#include "respondactivitytaskcompletedrequest.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskCompletedResponsePrivate;

class QTAWSSWF_EXPORT RespondActivityTaskCompletedResponse : public SwfResponse {
    Q_OBJECT

public:
    RespondActivityTaskCompletedResponse(const RespondActivityTaskCompletedRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RespondActivityTaskCompletedRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RespondActivityTaskCompletedResponse)
    Q_DISABLE_COPY(RespondActivityTaskCompletedResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
