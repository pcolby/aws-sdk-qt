// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRUNRESPONSE_H
#define QTAWS_GETWORKFLOWRUNRESPONSE_H

#include "glueresponse.h"
#include "getworkflowrunrequest.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRunResponsePrivate;

class QTAWSGLUE_EXPORT GetWorkflowRunResponse : public GlueResponse {
    Q_OBJECT

public:
    GetWorkflowRunResponse(const GetWorkflowRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkflowRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowRunResponse)
    Q_DISABLE_COPY(GetWorkflowRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
