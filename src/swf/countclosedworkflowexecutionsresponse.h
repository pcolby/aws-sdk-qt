// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTCLOSEDWORKFLOWEXECUTIONSRESPONSE_H
#define QTAWS_COUNTCLOSEDWORKFLOWEXECUTIONSRESPONSE_H

#include "swfresponse.h"
#include "countclosedworkflowexecutionsrequest.h"

namespace QtAws {
namespace Swf {

class CountClosedWorkflowExecutionsResponsePrivate;

class QTAWSSWF_EXPORT CountClosedWorkflowExecutionsResponse : public SwfResponse {
    Q_OBJECT

public:
    CountClosedWorkflowExecutionsResponse(const CountClosedWorkflowExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CountClosedWorkflowExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CountClosedWorkflowExecutionsResponse)
    Q_DISABLE_COPY(CountClosedWorkflowExecutionsResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
