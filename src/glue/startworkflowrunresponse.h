// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKFLOWRUNRESPONSE_H
#define QTAWS_STARTWORKFLOWRUNRESPONSE_H

#include "glueresponse.h"
#include "startworkflowrunrequest.h"

namespace QtAws {
namespace Glue {

class StartWorkflowRunResponsePrivate;

class QTAWSGLUE_EXPORT StartWorkflowRunResponse : public GlueResponse {
    Q_OBJECT

public:
    StartWorkflowRunResponse(const StartWorkflowRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartWorkflowRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartWorkflowRunResponse)
    Q_DISABLE_COPY(StartWorkflowRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
