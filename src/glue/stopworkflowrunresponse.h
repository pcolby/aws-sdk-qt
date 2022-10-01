// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPWORKFLOWRUNRESPONSE_H
#define QTAWS_STOPWORKFLOWRUNRESPONSE_H

#include "glueresponse.h"
#include "stopworkflowrunrequest.h"

namespace QtAws {
namespace Glue {

class StopWorkflowRunResponsePrivate;

class QTAWSGLUE_EXPORT StopWorkflowRunResponse : public GlueResponse {
    Q_OBJECT

public:
    StopWorkflowRunResponse(const StopWorkflowRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopWorkflowRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopWorkflowRunResponse)
    Q_DISABLE_COPY(StopWorkflowRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
