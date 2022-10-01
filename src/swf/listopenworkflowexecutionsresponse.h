// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENWORKFLOWEXECUTIONSRESPONSE_H
#define QTAWS_LISTOPENWORKFLOWEXECUTIONSRESPONSE_H

#include "swfresponse.h"
#include "listopenworkflowexecutionsrequest.h"

namespace QtAws {
namespace Swf {

class ListOpenWorkflowExecutionsResponsePrivate;

class QTAWSSWF_EXPORT ListOpenWorkflowExecutionsResponse : public SwfResponse {
    Q_OBJECT

public:
    ListOpenWorkflowExecutionsResponse(const ListOpenWorkflowExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOpenWorkflowExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOpenWorkflowExecutionsResponse)
    Q_DISABLE_COPY(ListOpenWorkflowExecutionsResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
