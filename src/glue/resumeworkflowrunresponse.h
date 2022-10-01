// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEWORKFLOWRUNRESPONSE_H
#define QTAWS_RESUMEWORKFLOWRUNRESPONSE_H

#include "glueresponse.h"
#include "resumeworkflowrunrequest.h"

namespace QtAws {
namespace Glue {

class ResumeWorkflowRunResponsePrivate;

class QTAWSGLUE_EXPORT ResumeWorkflowRunResponse : public GlueResponse {
    Q_OBJECT

public:
    ResumeWorkflowRunResponse(const ResumeWorkflowRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResumeWorkflowRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeWorkflowRunResponse)
    Q_DISABLE_COPY(ResumeWorkflowRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
