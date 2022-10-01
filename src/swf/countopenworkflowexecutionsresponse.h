// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTOPENWORKFLOWEXECUTIONSRESPONSE_H
#define QTAWS_COUNTOPENWORKFLOWEXECUTIONSRESPONSE_H

#include "swfresponse.h"
#include "countopenworkflowexecutionsrequest.h"

namespace QtAws {
namespace Swf {

class CountOpenWorkflowExecutionsResponsePrivate;

class QTAWSSWF_EXPORT CountOpenWorkflowExecutionsResponse : public SwfResponse {
    Q_OBJECT

public:
    CountOpenWorkflowExecutionsResponse(const CountOpenWorkflowExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CountOpenWorkflowExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CountOpenWorkflowExecutionsResponse)
    Q_DISABLE_COPY(CountOpenWorkflowExecutionsResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
