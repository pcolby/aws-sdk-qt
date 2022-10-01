// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETJOBSRESPONSE_H
#define QTAWS_BATCHGETJOBSRESPONSE_H

#include "glueresponse.h"
#include "batchgetjobsrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetJobsResponsePrivate;

class QTAWSGLUE_EXPORT BatchGetJobsResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchGetJobsResponse(const BatchGetJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetJobsResponse)
    Q_DISABLE_COPY(BatchGetJobsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
