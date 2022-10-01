// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCRAWLERSRESPONSE_H
#define QTAWS_BATCHGETCRAWLERSRESPONSE_H

#include "glueresponse.h"
#include "batchgetcrawlersrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetCrawlersResponsePrivate;

class QTAWSGLUE_EXPORT BatchGetCrawlersResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchGetCrawlersResponse(const BatchGetCrawlersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetCrawlersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetCrawlersResponse)
    Q_DISABLE_COPY(BatchGetCrawlersResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
