// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKFAILEDRESPONSE_H
#define QTAWS_RESPONDACTIVITYTASKFAILEDRESPONSE_H

#include "swfresponse.h"
#include "respondactivitytaskfailedrequest.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskFailedResponsePrivate;

class QTAWSSWF_EXPORT RespondActivityTaskFailedResponse : public SwfResponse {
    Q_OBJECT

public:
    RespondActivityTaskFailedResponse(const RespondActivityTaskFailedRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RespondActivityTaskFailedRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RespondActivityTaskFailedResponse)
    Q_DISABLE_COPY(RespondActivityTaskFailedResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
