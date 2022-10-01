// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBJECTSRESPONSE_H
#define QTAWS_DESCRIBEOBJECTSRESPONSE_H

#include "datapipelineresponse.h"
#include "describeobjectsrequest.h"

namespace QtAws {
namespace DataPipeline {

class DescribeObjectsResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT DescribeObjectsResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    DescribeObjectsResponse(const DescribeObjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeObjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeObjectsResponse)
    Q_DISABLE_COPY(DescribeObjectsResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
