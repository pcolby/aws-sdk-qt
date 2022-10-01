// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRUNSRESPONSE_H
#define QTAWS_GETWORKFLOWRUNSRESPONSE_H

#include "glueresponse.h"
#include "getworkflowrunsrequest.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRunsResponsePrivate;

class QTAWSGLUE_EXPORT GetWorkflowRunsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetWorkflowRunsResponse(const GetWorkflowRunsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkflowRunsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowRunsResponse)
    Q_DISABLE_COPY(GetWorkflowRunsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
