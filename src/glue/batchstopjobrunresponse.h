// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPJOBRUNRESPONSE_H
#define QTAWS_BATCHSTOPJOBRUNRESPONSE_H

#include "glueresponse.h"
#include "batchstopjobrunrequest.h"

namespace QtAws {
namespace Glue {

class BatchStopJobRunResponsePrivate;

class QTAWSGLUE_EXPORT BatchStopJobRunResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchStopJobRunResponse(const BatchStopJobRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchStopJobRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchStopJobRunResponse)
    Q_DISABLE_COPY(BatchStopJobRunResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
