// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBDEFINITIONSRESPONSE_H
#define QTAWS_DESCRIBEJOBDEFINITIONSRESPONSE_H

#include "batchresponse.h"
#include "describejobdefinitionsrequest.h"

namespace QtAws {
namespace Batch {

class DescribeJobDefinitionsResponsePrivate;

class QTAWSBATCH_EXPORT DescribeJobDefinitionsResponse : public BatchResponse {
    Q_OBJECT

public:
    DescribeJobDefinitionsResponse(const DescribeJobDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobDefinitionsResponse)
    Q_DISABLE_COPY(DescribeJobDefinitionsResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
