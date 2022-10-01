// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLOSEDWORKFLOWEXECUTIONSRESPONSE_H
#define QTAWS_LISTCLOSEDWORKFLOWEXECUTIONSRESPONSE_H

#include "swfresponse.h"
#include "listclosedworkflowexecutionsrequest.h"

namespace QtAws {
namespace Swf {

class ListClosedWorkflowExecutionsResponsePrivate;

class QTAWSSWF_EXPORT ListClosedWorkflowExecutionsResponse : public SwfResponse {
    Q_OBJECT

public:
    ListClosedWorkflowExecutionsResponse(const ListClosedWorkflowExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListClosedWorkflowExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClosedWorkflowExecutionsResponse)
    Q_DISABLE_COPY(ListClosedWorkflowExecutionsResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
