// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKCANCELEDRESPONSE_H
#define QTAWS_RESPONDACTIVITYTASKCANCELEDRESPONSE_H

#include "swfresponse.h"
#include "respondactivitytaskcanceledrequest.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskCanceledResponsePrivate;

class QTAWSSWF_EXPORT RespondActivityTaskCanceledResponse : public SwfResponse {
    Q_OBJECT

public:
    RespondActivityTaskCanceledResponse(const RespondActivityTaskCanceledRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RespondActivityTaskCanceledRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RespondActivityTaskCanceledResponse)
    Q_DISABLE_COPY(RespondActivityTaskCanceledResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
