// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETWORKFLOWSRESPONSE_H
#define QTAWS_BATCHGETWORKFLOWSRESPONSE_H

#include "glueresponse.h"
#include "batchgetworkflowsrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetWorkflowsResponsePrivate;

class QTAWSGLUE_EXPORT BatchGetWorkflowsResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchGetWorkflowsResponse(const BatchGetWorkflowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetWorkflowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetWorkflowsResponse)
    Q_DISABLE_COPY(BatchGetWorkflowsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
